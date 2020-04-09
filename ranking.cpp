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
    w(t){
        int n, x;
        cin >> n >> x;
        set<int> a;
        int temp;
        loop(n) {
            cin >> temp;
            a.insert(temp);        
        }
        int ans = 0;
        int i = 0;
        for(int k : a){
            temp = k-i-1;
            if(temp > x) break;
            temp += x-temp;
            // deb(k);
            // deb(temp);
            temp += i;
            // deb(temp);
            ans = ans > temp ? ans : temp;
            i++;
        }
        cout << ans+1 << endl;
    }
}