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
    int n, k;
    string str;
    vec<vec<char>> table;
    w(t){
        cin >> n >> k;
        cin >> str;
        table = vec<vec<char>>(k/2, vec<char>(2*(n/k)));
        for(int i = 0; i < k/2; i++){
            for(int j = 0; j < n/k; j++){
                table[i].pb(str[k*j+i]);
                table[i].pb(str[k*j+k-1-i]);
            }
        }
        // for(auto i : table){
        //     for(auto j : i) cout << j << " ";
        //     cout << endl;
        //     cout << i.size() << endl;
        // }

        int ans = 0;
        for(auto i : table){
            int count[26] = {0};
            for(auto j : i){
                count[j-'a']++;
            }
            int max = 0;
            Loop(0, 26, p) if(count[p] > max) max = count[p];
            ans += 2*(n/k) - max;
            // deb(ans);
        }
        if(k%2){
            int count[26] = {0};
            // deb(k/2);
            for(int i = 0; i < n/k; i++){
                // deb(i);
                count[str[i*k + (k/2)]-'a']++;
                // deb(str[i*k + (k/2)]);
            }
            int max = 0;

            Loop(0, 26, z) if(count[z] > max) max = count[z];
            // deb(max);
            ans += (n/k - max);
        }
        cout << ans << endl;
    }
}