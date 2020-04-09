// g++ not_all_flavours.cpp -o not_all_flavours && ./not_all_flavours

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
    int n, k;
    w(t){
        cin >> n >> k;
        vin count(k+1, 0);
        vin arr(n);
        loop(0, n, i) cin >> arr[i];
        
        int ans = 0;
        int types = 0;
        int start = 0;
        int i;
        for(i = 0; i < n; i++){
            if(count[arr[i]] == 0){
                types++;
                count[arr[i]]++;
                if(types >= k){
                    ans = ans > i-start ? ans : i-start;
                    while(types >= k){
                        count[arr[start]]--;
                        if(count[arr[start]] == 0) types--;
                        start++;
                    }
                }
            }
            else count[arr[i]]++;
        }
        ans = ans > i-start ? ans : i-start;
        cout << ans << endl;
    }
}