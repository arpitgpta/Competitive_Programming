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

int n;
vin f(100005, 0);
int m = 0;

int dp[100005][2];

int find(int i, int c, int tab = 0){
    if(i > m) return c;
    if(dp[i][0] == -1){
        dp[i][0] = find(i+1, 0, tab+1);
    }
    if(dp[i][1] == -1){
        dp[i][1] = find(i+2, i*f[i]);
    }
    return c+max(dp[i][0], dp[i][1]);

}


int32_t main(){
    scanf("%lld", &n);
    int temp;
    memset(dp, -1, sizeof(dp));
    loop(n){
        scanf("%lld", &temp);
        f[temp]++;
        m = max(m, temp);
    }
    cout << find(1, 0) << endl;
}