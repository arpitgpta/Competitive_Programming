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
#define end printf("\n");

int32_t main(){
    fastio;
    w(t){
        int g, crr_temp;
        cin >> g >> crr_temp;
        vec<vin> arr(g, vin(3));
        loop(g) cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        bool ok = true;
        int ct1 = crr_temp, ct2 = crr_temp; 
        int ctime = 0;
        loop(g){
            ct1 -= (arr[i][0]-ctime);
            ct2 += (arr[i][0]-ctime);
            if(arr[i][1] > ct2 or arr[i][2] < ct1){
                ok = false;
                break;
            }
            else if(ct2 == arr[i][1]) ct1 = ct2 = arr[i][1];
            else if(ct1 == arr[i][2]) ct1 = ct2 = arr[i][2];
            else{
                ct1 = max(ct1, arr[i][1]);
                ct2 = min(ct2, arr[i][2]);
            }
            ctime = arr[i][0];
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}