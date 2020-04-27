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

int n, m;
vin coins;

int dp[300][300];

int getWays(int i, int rem, int tab){
    // loop(tab) cout << "    "; deb2(i, rem);
    if(rem < 0) return 0;
    if(i == m){
        if(rem == 0) return 1;
        else return 0;
    }
    if(dp[i][rem] == -1){
        dp[i][rem] = (getWays(i+1, rem, tab+1) + getWays(i, rem-coins[i], tab+1));
    }
    return dp[i][rem];
}

int32_t main(){
    memset(dp, -1, sizeof(dp));
    cin >> n >> m;
    coins = vin(m);
    loop(m) cin >> coins[i];
    cout << getWays(0, n, 0) << endl;
}