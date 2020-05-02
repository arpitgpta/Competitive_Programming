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


int n;

string ans;
pii m;

map<int, int> rew;

int32_t main(){
    cin >> n;
    int temp;
    for(int i = 1; i < 10; i++){
        cin >> temp;
        rew[temp] = i;
    }
    // for(auto i : rew) cout << i.first << " will give " << i.second << endl;
    m = (*rew.begin());
    int len = n/m.first;
    loop(len) ans += ('0'+m.second);

    n -= len*m.first;
    vin csts(len, m.first);
    // deb(ans);
    int i = 0;
    while(n > 0 and i < len){
        bool flag = false;
        for(auto j : rew){
            n = n+csts[i];
            // deb2(ans[i]-'0', j.second);
            // deb(((ans[i]-'0') < j.second));
            if(n >= j.first and ((ans[i]-'0') < j.second)){
                ans[i] = ('0' + j.second);
                csts[i] = j.first;
                flag = true;
                // n -= j.first;
            }
            n -= csts[i];
        }
        if(!flag) break;        
        
        i++;
    }
    if(ans.size()) cout << ans << endl;
    else cout << "-1\n";
}