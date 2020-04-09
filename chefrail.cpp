// g++ chefrail.cpp -o chefrail && ./chefrail

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
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vin minus_x, minus_y, plus_x, plus_y;
        map<int, bool> minus_x_mp, minus_y_mp, plus_x_mp, plus_y_map;
        int temp;
        bool zero_flag = false;
        loop(n){
            cin >> temp;
            if(temp < 0) {
                minus_x.pb(temp);
                minus_x_mp[-temp] = true;
            }
            else{
                plus_x.pb(temp);
                plus_x_mp[temp] = true;
            }
        }
        loop(m){
            cin >> temp;
            if(temp < 0) {
                minus_x.pb(temp);
                minus_x_mp[-temp] = true;
            }
            else{
                plus_x.pb(temp);
                plus_x_mp[temp] = true;
            }
        }
    }
}