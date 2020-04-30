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


string s, t;
int arr[100005][26];

int inf = 1e8;

int32_t main(){
    fastio;
    w(tt){
        cin >> s;
        cin >> t;
        int slen = s.length();
        int tlen = t.length();
        loop(26) arr[slen][i] = inf;
        for(int i = slen-1; i >= 0; i--){
            Loop(0, 26, j) arr[i][j] = arr[i+1][j];
            arr[i][s[i]-'a'] = i+1;
        }
        int j = 0, j_prev = 0;
        int ans = 0;
        bool flag = true;
        while(j < tlen){
            int i = 0;
            while(1){
                int next = arr[i][t[j]-'a'];
                if(next == inf) break;
                else{j++; i = next;}
                if(j >= tlen) break;
                // deb2(i, j);
            }
            // cout << endl;
            
            if(j == j_prev){ flag = false; break; }
            else {ans++; j_prev = j;}
        }
        if(flag) cout << ans << endl;
        else cout << "-1\n";
    }
}