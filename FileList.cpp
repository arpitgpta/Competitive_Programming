/*


*/

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

int32_t main(){
    
    string str;
    bool flag = true;
    cin >> str;
    int len = str.length();
    
    flag = false;
    loop(len) if(str[i] == '.'){flag = true; break;}
    
    vin arr;
    int count = 0;
    loop(len){
        if(str[i] == '.') arr.pb(count), count = 0;
        else count++;
    }
    if(count > 3) flag = false;
    arr.pb(count);
    
    vec<string> ans;
    if(arr[0] == 0 or arr[0] > 8) flag = false;
    if(*(arr.end()-1) > 3 or *(arr.end()-1) < 1) flag = false;
    if(str[0] == '.' or str[len-1] == '.') flag= false;
    if(flag){
        int s, e, sl, el;
        s = 0;
        sl = arr[0];
        Loop(1, arr.size()-1, i){
            if(arr[i] > 11 or arr[i] < 2) {flag = false; break;}
            else{
                if(arr[i] < 5){
                    el = arr[i]-1;
                    e = sl+1+el;
                    ans.pb(str.substr(s, e));
                    s = s+e;
                    sl = 1;
                }
                else{
                    el = 3;
                    e = sl+1+el;
                    ans.pb(str.substr(s, e));
                    s = s+e;
                    sl = arr[i]-3;
                }
            }
        }
        ans.pb(str.substr(s));
    }

    if(flag){
        cout << "YES" << endl;
        for(auto i : ans) cout << i << endl;
    }
    else cout << "NO" << endl;
}