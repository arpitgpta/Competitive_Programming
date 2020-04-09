//https://codeforces.com/contest/1328
// g++ round621_A.cpp -o round621_A && ./round621_A

/*


*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cerr.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)

int32_t main(){
    fastio;
    int n, d;
    w(t){
        cin >> n >> d;
        vin a(n);
        loop(0, n, i) cin >> a[i];
        int ans = a[0];
        loop(1, n, i){
            if(i*a[i] <= d){
                ans += a[i];
                d -= i*a[i];
            }
            else{
                ans += d/i;
                break;
            }
        }
        cout << ans << endl;
    }
}