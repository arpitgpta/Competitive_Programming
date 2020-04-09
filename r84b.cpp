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

int32_t main(){
    fastio;
    w(t){
        int n, temp;
        cin >> n;
        vec<vin> l(n+1, vin(1));
        vec<bool> g(n+1, true);        
        Loop(1, n+1, j){
            cin >> l[j][0];
            loop(l[j][0]){
                cin >> temp;
                l[j].pb(temp);
            }
        }
        vin nt;
        Loop(1, n+1, j){
            bool flag = true;
            Loop(1, l[j][0]+1, i){
                if(g[l[j][i]]){flag = false; g[l[j][i]] = false; break;}
            }
            if(flag) nt.pb(j);
        }
        if(nt.size()){
            cout << "IMPROVE\n" << nt[0] << " ";
            for(int i = 1; i <= n; i++) if(g[i]){ cout << i << endl; break;}
        }
        else cout << "OPTIMAL" << endl;
    }
}