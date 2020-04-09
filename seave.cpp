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
    vec<bool> arr(110, true);
    Loop(2, 100, i){
        if(arr[i]){
            Loop(2, 51, j){
                if(i*j > 100) break;
                else arr[i*j] = false;
            }
        }
    }
    long long ans = 1;
    Loop(2, 54, i) if(arr[i]) ans*=i; //cout << i <<  " "; cout << endl;
    printf("%lld", ans);
}