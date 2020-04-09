// g++ infinite_pref.cpp -o infinite_pref && ./infinite_pref

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

int find_bal(string str, int s){
    int zer = 0, one = 0;
    for (int i = 0; i < s; i++){
        if (str[i] == '0') zer++;
        else one++;
    }
    return zer - one;
}

int main(){

    // fastio;    
    int t;
    cin >> t;
    int s, x;
    int bal, ans;
    string str;
    while (t--) {
        cin >> s >> x;
        cin >> str;
        bal = find_bal(str, s);
        if (x == 0){
            if (bal == 0) ans = -1;
            else 1;
        }
        else if (bal == 0 || bal < x){

        }
        else {
            ans = 1;
            for (int i = 2; i < s; i++) {
                for (int j = i; j < s; j += i) {
                    if (!find_bal(str.substr(0, j-1), i)) ans++;
                    else break;
                }
                reverse(str.begin(), str.end());
                for (int j = i; j < s; j += i) {
                    if (!find_bal(str.substr(0, j-1), i)) ans++;
                    else break;
                }
            }
            
        }
        cout << ans << endl;
    }

}