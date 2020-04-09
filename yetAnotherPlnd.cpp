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
    int n;
    w(t){
        cin >> n;
        vin arr(n+1);
        Loop(1, n+1, i) cin >> arr[i];
        bool flag = false;
        map<int, int> mp;
        Loop(1, n+1, i){
            // deb(i);
            // deb(mp[arr[i]]);
            if(mp[arr[i]] == 0) mp[arr[i]] = i;
            else{
                if(i-mp[arr[i]] > 1) { flag = true; break;}
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}