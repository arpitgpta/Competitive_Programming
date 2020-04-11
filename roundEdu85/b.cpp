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
// #define end printf("\n");

bool fun(int a, int b){
    return a>b;
}

int32_t main(){
    fastio;
    w(t){
        int n, x;
        cin >> n >> x;
        vin arr(n+1);
        Loop(1, n+1, i) cin >> arr[i];
        sort(arr.begin()+1, arr.end(), fun);
        // for(auto i : arr) cout << i << " "; cout << endl;
        vin a2(n+1, 0);
        Loop(1, n+1, i) a2[i] = arr[i]-x;
        int ans = n;
        Loop(1, n+1, i){
            a2[i] += a2[i-1];
            if(a2[i] < 0) {ans = i-1; break;}
        }
        cout << ans << endl;
    }
}