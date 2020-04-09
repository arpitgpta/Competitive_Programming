//https://codeforces.com/contest/1328
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

int dp[5000];
int a, b, c;
int fun(int n){
    if(n < 0) return INT_MIN;
    if(n == 0) return 0;
    int x, y, z, temp;
    if(dp[n] == INT_MIN){
        x = fun(n-a);
        y = fun(n-b);
        z = fun(n-c);
        temp = max(x, max(y, z));
        // if(temp == INT_MIN) dp[n] = INT_MIN;
        dp[n] = temp+1;
    }
    return dp[n];
}

int32_t main(){
    fastio;
    int n;
    loop(5000) dp[i] = INT_MIN;
    cin >> n >> a >> b >> c;
    dp[0] = 0;
    cout << fun(n) << endl;
}

// int32_t main(){
//     int n;
//     cin >> n >> a >> b >> c;
//     int ans = 0, temp;//fx = 0, fy = 0, fz = 0;
//     for(int x = 0; x <= 4000; x++){
//         for(int y = 0; y <= 4000; y++){
//             if(a*x + b*y > n) break;
//             temp = n - (a*x + b*y);
//             if(temp%c == 0){
//                 if((x+y+temp/c) > ans) {
//                     ans = x+y+temp/c;
//                 }
//             }
//         }
//     }
//     cout << ans << endl;
// }