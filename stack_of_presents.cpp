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
#define mod 1000000007

int n, m;
int stk[100005];
int arr[100005];

int32_t main(){
    fastio;
    w(t){
        cin >> n >> m;
        loop(n) cin >> stk[i];
        loop(m) cin >> arr[i];
        int j = 0;
        map<int, bool> seen;
        int ans = 0;
        loop(m){
            if(seen[arr[i]]) ans++;
            else{
                while(stk[j] != arr[i] and j < n) seen[stk[j]] = true, j++;
                seen[arr[i]] = true;
                ans += (j-i)*2+1;
            }
            // deb(ans);
        }
        cout << ans << endl;
    }
}