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
    vec<bool> seave(1005, true);
    Loop(2, 501, i){
        if(seave[i]){
            Loop(2, 501, j){
                if(i*j > 1000) break;
                seave[i*j] = false;
            }
        }
    }
    vin primes;
    Loop(2, 1000, i) if(seave[i]) primes.pb(i);
    int n, next;
    vin arr, ans;
    w(t){
        cin >> n;
        arr = vin(n);
        ans = vin(n, -1);
        loop(n) cin >> arr[i];
        next = 1;
        bool flag = false;
        int checked = 0;
        for(auto i : primes){
            flag = false;
            for(int j = 0; j < n; j++){
                if(ans[j] == -1 and arr[j]%i == 0){
                    ans[j] = next;
                    flag = true;
                    checked++;
                }
            }
            if(flag) next++;
            if(checked >= n) break;
        }
        cout << next-1 << endl;
        for(int i = 0; i < n; i++) cout << ans[i] << " "; cout << endl;
        // cout << endl;
    }
}