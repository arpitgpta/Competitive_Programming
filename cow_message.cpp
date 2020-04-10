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
#define end printf("\n");

int32_t main(){
    string str;
    cin >> str;
    int len = str.length();
    int dp[len][26];
    memset(dp, 0, sizeof(dp));
    for(int i = len-2; i>= 0; i--){
        for(int j = 0; j < 26; j++) dp[i][j] = dp[i+1][j];
        dp[i][str[i+1]-'a']++;
    }
    // loop(len){
    //     cout << str[i] << " ";
    //     for(int j = 0; j < 5; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int table[26][26];
    memset(table, 0, sizeof(table));
    loop(len){
        Loop(0, 26, j){
            table[str[i]-'a'][j] += dp[i][j];
        }
    }
    int ans = 0;
    loop(26) Loop(0, 26, j) ans = max(ans, table[i][j]);
    loop(26){
        int temp = 0;
        Loop(0, len, j) if(str[j]-'a' == i) temp++;
        ans = max(temp, ans);
    }
    cout << ans << endl;
}