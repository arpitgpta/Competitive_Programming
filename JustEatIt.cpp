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
        vin arr(n);
        loop(n) cin >> arr[i];
        int ms = 0, s = 0;
        Loop(0, n-1, i){
            s += arr[i];
            if(s > ms) ms = s;
            if(s < 0) s = 0;
        }
        s = 0;
        Loop(1, n, i){
            s += arr[i];
            if(s > ms) ms = s;
            if(s < 0) s = 0;
        }
        s = 0;
        loop(n) s+=arr[i];
        // deb2(ms, s);
        if(ms < s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}