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
    string str;
    int len;
    w(t){
        cin >> str;
        len = str.length();
        
        deque<char> dq;
        bool isThere[26];
        memset(isThere, 0, sizeof(isThere));
        
        dq.pb(str[0]);
        isThere[str[0]-'a'] = true;

        bool ok = true;
        Loop(1, len, i){
            if(isThere[str[i]-'a']){
                if(dq[0] == str[i] ) if(dq[1] != str[i-1]) ok = false;
                Loop(1, dq.size()-1, j) if(dq[j] == str[i]){
                    if(dq[j-1] != str[i-1] and dq[j+1] != str[i-1]) ok = false;
                }
                else if(dq.back() == str[i] and dq[dq.size()-2] != str[i-1]) ok = false;

            }
            else{
                if(dq[0] == str[i-1]){
                    dq.push_front(str[i]);
                    isThere[str[i]-'a'] = true;
                }
                else if(dq.back() == str[i-1]){
                    dq.pb(str[i]);
                    isThere[str[i]-'a'] = true;
                }
                else ok = false;
            }
        }
        if(ok){
            cout << "YES" << endl;
            for(auto i : dq) cout << i;
            loop(26) if(!isThere[i]) cout << (char)(i+'a');
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}