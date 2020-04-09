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
    cin >> n;
    vin arr(n);
    loop(n) cin >> arr[i];
    sort(arr.begin(), arr.end());
    w(t){
        int k;
        cin >> k;
        int pos = upper_bound(arr.begin(), arr.end(), k) - arr.begin();
        cout << pos << endl;
    }
}