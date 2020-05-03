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




// approch 1
int32_t main1(){
    int n, m;
    scanf("%lld", &n);
    scanf("%lld", &m);
    int arr[n+5];
    for(int i = 1; i <= n; i++) scanf("%lld", &arr[i]);
    int adj[n+1][n+1];
    memset(adj, 0, sizeof(adj));
    int t1, t2;
    int ans = 0;
    loop(m){
        scanf("%lld", &t1);
        scanf("%lld", &t2);
        ans += min(arr[t1], arr[t2]);
    }
    cout << ans << endl;
}

//approch 2
int32_t main(){
    int n, m;
    cin >> n >> m;
    vec<pii> cst(n);
    int temp;
    int arr[n+1];
    loop(n){
        cin >> temp;
        arr[i+1] = temp;
        cst[i] = {temp, i+1};
    }
    sort(cst.begin(), cst.end());
    reverse(cst.begin(), cst.end());
    vec<vin> alst(n+1);
    int temp2;
    loop(m){
        cin >> temp >> temp2;
        alst[temp].pb(temp2);
        alst[temp2].pb(temp);
    }
    vec<bool> avilable(n+1, true);
    int ans = 0;
    loop(n){
        int v = cst[i].second;
        // deb(v);
        for(auto j : alst[v]){
            if(avilable[j]) ans += arr[j];
        }
        avilable[v] = false;
        // deb(ans);
    }
    cout << ans << endl;
}