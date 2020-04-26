#include <bits/stdc++.h>
// #define fastio ios_base::sync_with_stdio(false); cin.tie(NUint); cout.tie(NUint)
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
#define mod (int)1000000000

map<int, int> closing;

void get_closings(string str){
    stack<int> stk;
    int len = str.length();
    for(int i = 0; i < len; i++){
        // deb2(i, str[i]);
        // deb(('(' == str[i]));
        // deb(i);
        if(str[i] == '(') {
            stk.push(i);
        }
        else if(str[i] == ')'){
            int p = stk.top();
            stk.pop();
            closing[p] = i;
            // deb2(i, p);
        }
    }
}

string str;

pii solve(int start, int end, int tab){
    // loop(tab) cout << "    "; deb2(start, end);
    int x = 0, y = 0;
    Loop(start, end, i){
        if(str[i] == 'E') x = (x+1)%mod;
        else if(str[i] == 'W') x = (x-1)%mod;
        else if(str[i] == 'S') y = (y+1+mod)%mod;
        else if(str[i] == 'N') y = (y-1+mod)%mod;
        else if(str[i] == '('){
            int d = str[i-1]-'0';
            pii temp = solve(i+1, closing[i], tab+1);
            x = (x+(temp.first*d)%mod)%mod;
            y = (y+(temp.second*d)%mod)%mod;
            i = closing[i];
        }
    }
    return {x%mod, y%mod};
}

int32_t main(){
    w(t){   
        int x = 0, y = 0;
        closing = map<int, int>();
        cin >> str;
        // deb(str);
        get_closings(str);
        // for(auto i : closing) cout << i.first << " " << i.second << endl; cout << endl;
        pii ans = solve(0, str.length(), 0);
        
        cout << "Case #" << t << ": " << ans.first+1 << " " << ans.second+1 << endl;
    }
 }