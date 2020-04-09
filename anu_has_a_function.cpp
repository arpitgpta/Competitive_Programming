// g++ anu_has_a_function.cpp -o anu_has_a_function && ./anu_has_a_function

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

bool fun(ll a, ll b){return a > b;}

int main(){

    fastio;    
    int n;
    cin >> n;
    vll arr(n);
    loop(n) cin >> arr[i];
    sort(arr.begin(), arr.end());
    vector<pair<int, int>> new_arr;
    new_arr.push_back({arr[0], 1});
    int last = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] == new_arr[last].first) new_arr[last].second++;
        else new_arr.push_back({arr[i], 1}), last++;
    }
    int i = 0;
    for(int i = 0; i <= last; i++) if(new_arr[i].second == 1) break;
    cout << new_arr[i].first << " ";
    int temp = new_arr[i].first;
    for(auto j : arr) if(j != temp) cout << j << " "; cout << endl;
     
}