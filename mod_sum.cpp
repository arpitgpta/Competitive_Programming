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

int dp[1005][1005];

int32_t main(){
    bool flag = false;
    int n, m;
    cin >> n >> m;
    vin arr(n);
    loop(n) cin >> arr[i], arr[i] %= m;                         
    if(m < n) flag = true;
    else{
        memset(dp, 0, sizeof(dp));
        dp[n-1][arr[n-1]%m] = true;
        for(int i = n-2; i >= 0; i--){
            int temp = arr[i]%m;
            dp[i][temp] = true;
            for(int j = 0; j < m; j++){
                if(dp[i+1][j]) {
                    dp[i][j] = true;
                    temp = (j+arr[i])%m;
                    dp[i][temp] = true;
                }
            }
            // if(dp[i][0]){flag = true; break;}
        }
        flag = dp[0][0];
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < m; j++){
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // int temp = 0;
        // loop(n) temp += arr[i];
        // if(temp == 0) flag = false;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}