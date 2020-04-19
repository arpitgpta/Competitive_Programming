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
    fastio;
    int n, d;
    int arr[1005];
    w(t){
        cin >> n >> d;
        loop(n) cin >> arr[i];
        int temp = 0;
        temp = d/arr[n-1];
        arr[n-1] = temp*arr[n-1];
        for(int i = n-2; i >= 0; i--){
            temp = arr[i+1]/arr[i];
            arr[i] = temp*arr[i];
        }       
        // sort(arr, arr+n);
        cout << "Case #" << t << ": " << arr[0] << endl;
     }
}