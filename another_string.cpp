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



int32_t main(){
    int n;
    string str;
    cin >> n;
    cin >> str;
    vin ones;
    int len = str.length();
    for(int i = 0; i < len; i++) if(str[i] == '1') ones.pb(i);
    string s1 = str;
    str += '1';
    str = '1'+str;
    map<int, pii> cnt;
    for(auto i : ones){
        int c = 1;
        int ii = i+1;
        while(str[ii-1] == '0') c++, ii--;
        cnt[i].first = c;
        c = 1;
        ii = i+1;
        while(str[ii+1] == '0') c++, ii++;
        cnt[i].second = c;
    }
    if(n > ones.size()) cout << 0 << endl;
    else if(n == 0){
        // int i = 0;
        int ans = 0;
        len = s1.length();
        int temp = 0;
        loop(len){
            if(s1[i] == '0') temp++;
            else{
                ans += (temp*(temp+1))/2;
                temp = 0;
            }
        }
        ans += (temp*(temp+1))/2;
        cout << ans;
    }
    else{
        int ans = 0;
        int s = ones.size() - n + 1;
        // deb(s);
        loop(s){
            // deb(cnt[ones[i]].first);
            // deb(cnt[ones[i+n-1]].second);
            ans += cnt[ones[i]].first*cnt[ones[i+n-1]].second;
        }        
        cout << ans << endl;
    }
}