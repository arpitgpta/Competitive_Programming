// g++ CRWDCN.cpp -o CRWDCN && ./CRWDCN

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

int lcm(int a, int b){
    return (a*b)/__gcd(a,b);
}

int32_t main(){
    int n, x, y, z;
    w(t){
        cin >> n;
        n *= 24;
        cin >> x >> y >> z;
        int temp = lcm(x, lcm(y, z));
        int ans = n/temp;
        cout << ans << endl;
    }
}