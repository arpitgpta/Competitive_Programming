// g++ tsp.cpp -o tsp && ./tsp

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

int cities[6][6] = {
    {1,2,3,4,5},
    {4,2,5,8,9},
    {9,5,8,3,1},
    {10,43,8,2,1},
    {3,6,9,2,4}
};

vector<vector<pair<int, vin>>> dp(6, vector<pair<int, vin>>(6, {INT_MAX, vin(0)}));
vin ans(5);
int cost = INT_MAX;

pair<int, vin> find_path(vin rem, int tab){
    if(rem.size() == 1){
        vin ans ={ 1, rem[0]};
        return {cities[rem[0]][1],ans};
    }
    int start = rem[0];
    pair<int, vin> ans{INT_MAX, vin(0)}, temp{INT_MAX, vin(0)};
    vin new_rem;
    for(int i = 1; i < rem.size; i++) new_rem.pb(rem[i]);
    for(int i = 1; i < rem.size(); i++){
        if(dp[start][rem[i]].first != INT_MAX) ans = dp[start][rem[i]];
        else{
            temp = dp[start][rem[i]] = find_path(new_rem, tab+1);
            if(temp.first + cities[start][rem[i]] < ans.first) {
                ans = temp;
            }
        } 
    }
    return ans;
}

int32_t main(){
    vin rem = {1,2,3,4,5,6};
    pair<int, vin> ans;
    ans = find_path(rem, 0);
    cout << "cost: " << ans.first << endl;
    cout << "path: ";
    for(int i = ans.second.size()-1; i >= 0; i--){
        cout << ans.second[i] << " ";
    }
    cout << endl;
}