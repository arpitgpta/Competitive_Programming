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



// vin b, g;
// int n, m;

// int fun(int i, int j){

// }

// int32_t main(){
//     cin >> n;
//     b = vin(n);
//     loop(n) cin >> b[i];
//     cin >> m;
//     g = vin(m);
//     loop(m) cin >> g[i];
//     vin::iterator it;
//     it = lower_bound(g.begin(), g.end(), b[0]-1);
    
//     if(it != g.begin()) {
//         cout << "here" << endl;
//         g.erase(g.begin(), it-1);
//     }
//     for(auto i : g) cout << i << " "; cout << endl;
// }








int fun(vin boys, vin girls, int i, int j){
    if(boys.size() <= i) return 0;
    if(girls.size() == 0) return 0;
    int a = boys[i];
    // boys.erase(boys.begin());

    int temp, ans = 0;
    if(binary_search(girls.begin(), girls.end(), a-1)){
        // cout << "case 1" << endl;
        vin g1;
        bool flag = false;
        for(auto i : girls) if(i != a-1 or flag) g1.pb(i); else flag = true;
        temp = fun(boys, g1, i+1, j)+1;
        ans = ans > temp ? ans : temp;
    }
    if(binary_search(girls.begin(), girls.end(), a)){
        // cout << "case 2" << endl;
        vin g1;
        bool flag = false;
        for(auto i : girls) if(i != a or flag) g1.pb(i); else flag = true;
        temp = fun(boys, g1, i+1, j)+1;
        ans = ans > temp ? ans : temp;
    }
    if(binary_search(girls.begin(), girls.end(), a+1)){
        vin g1;
        bool flag = false;
        for(auto i : girls) if(i != a+1 or flag) g1.pb(i); else flag = true;
        temp = fun(boys, g1, i+1, j)+1;
        ans = ans > temp ? ans : temp;
    }
    temp = fun(boys, girls, i+1, j);
    ans = ans > temp ? ans : temp;
    return ans;

}

int32_t main(){
    int n, m;
    cin >> n;
    vin boys(n);
    loop(n) cin >> boys[i];
    sort(boys.begin(), boys.end());

    cin >> m;
    vin girls(m);
    loop(m) cin >> girls[i];
    sort(girls.begin(), girls.end());

    int ans = 0;
    int i = 0, j = 0;
    while(i < n and j < m){
        if(abs(boys[i] - girls[j]) <= 1) i++, j++, ans++;
        else if(boys[i] + 1 < girls[j]) i++;
        else j++;
    }
    
    // while(1){
    //     if(boys[0] > girls[0]+1) 
    // }
    // int ans = fun(boys, girls, 0, 0);
    // int temp = fun(girls, boys, 0, 0);
    // ans = ans > temp ? ans : temp; 
    cout << ans << endl;

    // vin arr = {1,2,3,4,5,6,7};
    // arr.erase(find(arr.begin(), arr.end(), 3));
    // for(auto i : arr) cout << i << " "; cout << endl;

}