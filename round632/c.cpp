/*


*/

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
#define arr_out(n, s) Loop(0, s, lout) cout << n[lout] << " ";
#define pi(x) printf("%lld ", x);
#define end printf("\n");

int32_t main(){
    int n;
    cin >> n;
    mk_arr(arr, int, n);
    mii mp;
    int s = -1;
    int ttl = 0;
    int ans = 0;
    mp[0] = -1;
    loop(n){
        ttl+=arr[i];
        if(mp[ttl]){
            s = mp[ttl]+1;

        }
        ans += i-s;
        mp[ttl] = i-1;
        deb(i);
        deb(ttl);
        deb(ans);
    }
    pi(ans);end;

}