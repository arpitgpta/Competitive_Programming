// g++ prime_bit.cpp -o prime_bit && ./prime_bit

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
    int n;
    w(t){
        cin >> n;
        int ans = 0;
        int i = 0;
        int a;
        while(n){
            a = n& 1;
            if(a) ans += i;
            i++;
            n = n >> 1;
        }
        cout << ans << endl;
    }
}