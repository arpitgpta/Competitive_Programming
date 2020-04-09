// g++ food_buying.cpp -o food_buying && ./food_buying

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

int main(){
   
    fastio;
    ll t, num;
    cin >> t;
    while (t--) {
        cin >> num;
        ll ans = 0, temp;
        while (num >= 10){
            ans += num - num%10;
            temp = num%10;
            num /= 10;
            num += temp;
        }
        ans += num;
        cout << ans << endl;
    }
}