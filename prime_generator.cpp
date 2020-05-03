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


int32_t main(){
    fastio;
    vec<bool> arr(100005, true);
    vin primes;
    Loop(2, 100004, i){
        if(arr[i]){
            primes.pb(i);
            Loop(2, 50005, j){
                if(i*j > 100004) break;
                else arr[i*j] = false;
            }
        }
    }
    w(t){
        int n, m;
        cin >> n >> m;
        if(n == 1) n++;
        int b[m-n+1];
        loop(m-n+1) b[i] = 1;
        for(auto x : primes){
            if(x*x > m) break;
            int s = max((n/x)*x, 2*x);
            for(int i = s; i <= m; i+= x){
                if(i-n < 0) continue;
                b[i-n] = 0;
            }
        }
        loop(m-n+1) if(b[i]) cout << (i+n) << endl;
        cout << endl;
    }
}