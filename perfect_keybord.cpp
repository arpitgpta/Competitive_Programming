// g++ perfect_keybord.cpp -o perfect_keybord && ./perfect_keybord

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
#define vin vector<int>
#define vll vector<long long>

int main(){

    fastio;    
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        string ans = "";
        int ans_last = -1, ans_first = -1;
        int len = str.length();
        vector<bool> selected(26, false);
        vin next(26, -1), prev(26, -1);
        for(int i = 0; i < len; i++){
            int temp = str[i]='a';
            if(!selected[temp]){
                selected[temp] = true;
                
            }
        }
    }

}