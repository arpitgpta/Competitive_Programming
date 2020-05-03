#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define mii map<int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define Loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define loop(n) for(int i = 0; i < n; i++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)
#define vec vector
#define mk_arr(n, t, s) t* n = new t[s]; loop(s) cin >> n[i]; 
#define mi_arr(n, s) int* n = new int[s]; loop(s) cin >> n[i]; 
#define arr_out(n, s) Loop(0, s, lout) cout << n[lout] << " ";
#define pi(x) printf("%lld ", x);

int32_t main(){
    // fastio;
    w(t){
        int n;
        cin >> n;
        int temp;
        vin arr;
        loop(n){
            cin >> temp;
            arr.pb(temp);
        } 
        sort(arr.begin(), arr.end());
        vin t1;       
        for(int i = 0; i < n/2; i++){
            t1.pb(arr[n-1-i]);
            t1.pb(arr[i]);
            // cout << arr[n-1-i] << " ";
            // cout << arr[i] << " ";
        }        
        if(n&1) t1.pb(arr[n/2]);
        reverse(t1.begin(), t1.end());
        for(auto i : t1) cout << i << " "; cout << endl;
        // cout << endl;
    }
}