// g++ arr_with_odd_sum.cpp -o arr_with_odd_sum && ./arr_with_odd_sum

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

    int t, n, temp;
    cin >> t;
    while (t--){
        cin >> n;
        int n_odd = 0, n_even = 0;
        loop(n){
            cin >> temp;
            temp % 2 ? n_odd++ : n_even++;
        }
        if ((n_odd%2) or (n_odd > 0 and n_even > 0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}