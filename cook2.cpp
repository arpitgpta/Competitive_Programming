/*


*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define Loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define loop(n) for(int i = 0; i < n; i++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)
#define vec vector
#define mod 1000000007

int32_t main(){
    fastio;
    w(t){
        int temp, ans = 1;
        int n; cin >> n;
        vec<bool> already(30, false);
        vin num(n); loop(n) cin >> num[i];
        vin power(31);
        loop(31) power[i] = pow(2, i);
        loop(n){
            temp = 0;
            Loop(0, 31, j){
                if(num[i]&power[j]){
                    if(already[j]) temp++;
                    already[j] = true;
                    
                }
            }
            ans = (ans*power[temp])%mod;
        }        
        cout << ans << endl;
    }
}