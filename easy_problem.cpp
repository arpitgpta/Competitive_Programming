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



// #define forn(i, n) for (int i = 0; i < int(n); i++)

const int N = 100 * 1000 + 13;
const long long INF64 = 1e18;

int n;
string s;
int a[N];
long long dp[N][5];

const string h = "hard";

int32_t main() {
	scanf("%d", &n);
	static char buf[N];
	scanf("%s", buf);
	s = buf;
	loop(n)
		scanf("%d", &a[i]);
	
	loop(N) Loop(0,5,j) dp[i][j] = INF64;
	dp[0][0] = 0;
	loop(n) Loop(0,4,j){
		dp[i + 1][j + (s[i] == h[j])] = min(dp[i + 1][j + (s[i] == h[j])], dp[i][j]);
		dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + a[i]);
	}
	
	printf("%lld\n", *min_element(dp[n], dp[n] + 4));
	return 0;
}