#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
// #define int long long int
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
    fastio;
    int n;
    w(t){
        cin >> n;
        vin a(n), b(n), c(n);
        loop(n) cin >> a[i] >> b[i];
        Loop(1, n, i) c[i] = max((int)0, (a[i]-b[i-1]));
        c[0] = max((int)0, a[0]-b[n-1]); 
        int all = 0;
        loop(n) all += c[i];
        int ans = -1;
        int temp = 0;
        loop(n){
            temp = a[i]+all-c[i];
            if(ans == -1) ans = temp;
            else ans = min(ans, temp);
        }
        cout << ans << endl;
    }
}