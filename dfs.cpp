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

vin leaves;
void get_leave(vec<vin> edges, int i){
    if(edges[i].size() == 0) {leaves.pb(i); return;}
    for(auto j : edges[i]){
        edges[j].erase(find(edges[j].begin(), edges[j].end(), i));
        get_leave(edges, j);
    }
}

int dfs(vec<vin> edges, int i, int tab = 0){
    int d;
    d = 0;
    int temp;
    // loop(tab) cout << " ";
    // deb(i);
    if(edges[i].size() == 0) return 0;
    for(auto j : edges[i]){
        edges[j].erase(find(edges[j].begin(), edges[j].end(), i));
        temp = dfs(edges, j, tab+1);
        if(temp > d) d = temp;
    }
    return d+1;
}

int32_t main1(){
    int n;
    cin >> n;
    vec<vin> edges;
    edges = vec<vin>(n+1);
    int s, d;
    loop(n-1){
        cin >> s >> d;
        edges[s].pb(d);
        edges[d].pb(s);
    }
    leaves = vin(0);
    get_leave(edges, 1);
    for(auto i : leaves) cout << i << " "; cout << endl;
}

int32_t main(){
    fastio;
    freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);
    int ans = 0;
    vec<vin> edges;

    int spd;
    cin >> spd;
    int nodes, s, e;
    loop(spd){
        cin >> nodes;
        edges = vec<vin>(nodes+1);
        loop(nodes-1){
            cin >> s >> e;
            edges[s].pb(e);
            edges[e].pb(s);
        }
        int temp = 0;
        int a = 0;
        leaves = vin(1,1);
        get_leave(edges, 1);
        
        for(int l = 0; l < 3; l++){
            temp = dfs(edges, leaves[l]);
            a = a > temp ? a : temp;
            if(a == nodes-1) break;
        }
        ans += a;
    }
    cout << ans << endl;
}