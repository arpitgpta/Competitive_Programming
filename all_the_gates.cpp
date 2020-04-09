// g++ all_the_gates.cpp -o all_the_gates && ./all_the_gates

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
    int k, n;
    w(t){
        cin >> n >> k;
        vector<char> arr(n);
        loop(0, n, i) cin >> arr[i];
        bool flag= false;
        for(int i = 1; i <= k; i++){
            if(flag){
                if(arr[n-i] == 'T') flag = false;
            }
            else if(arr[n-i] == 'H') flag = true;
        }
        int ans = 0;
        if(flag){
            for(int i = k+1; i <= n; i++) {
                if(arr[n-i] == 'T') ans++;
            }
        }
        else {
            for(int i = k+1; i <= n; i++) {
                if(arr[n-i] == 'H') ans++;
            }
        }
        cout << ans << endl;
    }
}