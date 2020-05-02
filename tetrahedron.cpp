#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define mii map<int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define Loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define loop(n) for(int i = 0; i < n; i++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)
#define vec vector
#define mk_arr(n, t, s) t* n = new t[s]; loop(s) cin >> n[i]; 
#define mi_arr(n, s) int* n = new int[s]; loop(s) cin >> n[i]; 
#define arr_out(n, s) Loop(0, s, lout) cout << n[lout] << " ";
#define pi(x) printf("%lld ", x);
#define mod 1000000007


// int fun(int p, int s, int dp[][2]){
//     if(s == 0){
//         if(p == 0) return 1;
//         else return 0;
//     }
//     if(s < 0) return 0;
    
//     if(dp[s][p] == -1){
//         if(p){
//             dp[s][p] = (fun(0, s-1, dp) + 2*fun(1, s-1, dp))%mod;
//         }
//         else dp[s][p] = (3*fun(1, s-1, dp))%mod;
//     }
//     return dp[s][p]%mod;
// }

int32_t main(){
    int n;
    cin >> n;
    int zD = 1;
    int zABC = 0;
    for (int i = 1; i <= n; i++) {
        int nzD = zABC * 3LL % mod;
        int nzABC = (zABC * 2LL + zD) % mod;
        zD = nzD;
        zABC = nzABC;
    }
    cout << zD;
}