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


int32_t main(){

    int n;
    int temp;
    w(t){
        cin >> n;
        vec<pii> pts;
        pts.pb({0, 2});
        loop(n) {
            cin >> temp;
            if(temp%2 == 0){
                if(temp%4 == 0) pts.pb({i+1, 2});
                else pts.pb({i+1, 1});
            }
        }
        pts.pb({n+1, 2});

        int len = pts.size();
        temp = 0;
        for(int i = 1; i < len-1; i++){
            if(pts[i].second == 1) {
                temp += (pts[i].first - pts[i-1].first)*(pts[i+1].first - pts[i].first);
            }
        }
        int ans = (n*(n+1))/2 - temp;
        cout << ans << endl;
    }
}