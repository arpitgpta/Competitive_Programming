// g++ collecting_packeges.cpp -o collecting_packeges && ./collecting_packeges

/*


*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cerr.tie(NULL)
#define endl '\n'
#define ll long long int
using namespace std;
#define pii pair <ll , ll >
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define loop(x) for (int i = 0; i < x; i++)

bool fun(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int lower(vector<pair<int, int>> pkg, int a){
    int l, h;
    l = 0;
    h = pkg.size();
    int m;
    while (h >= l){
        m = (l+h)/2;
        if (pkg[m].first == a){
            if (pkg[m-1].first < a) return m;
            else h = m-1;  
        }
        else if (pkg[m].first < a) l = m+1;
        else h = m-1;
    }
}

int upper(vector<pair<int, int>> pkg, int a){
    int l, h;
    l = 0;
    h = pkg.size();
    int m;
    while (h >= l){
        m = (l+h)/2;
        if (pkg[m].first == a){
            if (pkg[m+1].first > a) return m;
            else h = m-1;  
        }
        else if (pkg[m].first < a) l = m+1;
        else h = m-1;
    }
}


int main(){

    fastio;    
    int t;
    cin >> t;
    while (t--) {
        vector<bool> uniquex(1001, false);
        int n;
        cin >> n;
        vector<pair<int, int>> packages(n);
        loop(n) {
            cin >> packages[i].first >> packages[i].second;
            uniquex[packages[i].first] = true;
        }         
        sort(packages.begin(), packages.end(), fun);
        int flag = 0;
        string ans = "";
        int crr_maxX = 0;
        int crr_maxY = 0;
        for (int i = 0; i <= 1000; i++){
            if (uniquex[i]){
                for (int j = crr_maxX; j < i; j++) ans += 'R';
                int lb = lower(packages, i);
                int ub = upper(packages, i);
                int num = ub - lb +1;
                int tempY = crr_maxY;
                for(int j = crr_maxX ; j < crr_maxX + num; j++){
                    if (packages[j].second < crr_maxY) {
                        flag = 1;
                        break;
                    }
                    else tempY = packages[j].second > tempY ? packages[j].second : tempY;
                }
            }
            if (flag == 1) break;
        }
        if (flag == 1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << ans << endl;
        }
    }
}