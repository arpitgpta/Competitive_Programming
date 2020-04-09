// g++ round621_B.cpp -o round621_B && ./round621_B

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
    int n, x;
    w(t){
        cin >> n >> x;
        int ans = INT_MAX;
        vector<int> a(n);
        int temp;
        bool flag = false;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == x) flag = true;
        }
        sort(a.begin(), a.end());
        // deb(a[n-1]);
        if(a[n-1] == x) ans = 1;
        else if(a[n-1] > x) ans = 2;
        else {
            ans = x/a[n-1];
            if(x%a[n-1]) ans++;
        }
        if(flag) ans = 1;
        cout << ans << endl;
    }
}