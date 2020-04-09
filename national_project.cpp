// g++ national_project.cpp -o national_project && ./national_project

/*


*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cerr.tie(NULL)
#define endl '\n'
#define ll long long int
using namespace std;
#define pii pair <ll , ll >
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define loop(x) for (int i = 0; i < x; i++)
#define vin vector<int>
#define vll vector<long long>

int main(){

    fastio;    
    ll t, n, g, b;
    cin >> t;
    while(t--){
        cin >> n >> g >> b;
        ll k = ((n/2)/b);
        ll rem_b = n/2 - k*b;
        ll ans = 0;
        if(n > (k*(g+b)+g+rem_b)){
            ans = (k+1)*(g+b);
            n -= (k*(g+b)+g+rem_b);
            // deb2(n, ans);
            ans += (g+b)*(n/g-1) + n%g+1;
        }
        else ans = n;
        cout << ans << endl;
    }

}