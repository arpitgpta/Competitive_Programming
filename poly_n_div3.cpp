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

int solve(string str){
    int ans = 0;
    int len = str.length();
    int i = 0;

    while(i < len-1){
        if(str[i] != str[i+1]){
            if(i+1 < len){
                ans++;
                i += 2;
            }
        }
        else if(i+2 < len){
            ans++;
            i += 3;
        }
        else break;
    }
    return ans;
}

int32_t main(){
    string str;
    cin >> str;
    int len = str.length();
    loop(len){
        int a = str[i]-'0';
        a %= 3;
        str[i] = a+'0';
    }
    int ans = 0;
    int i = 0;
    while(i < len){
        if(str[i] == '0') ans++, i++;
        else{
            int j = 0;
            int ii = i;
            while(i < len and str[i] != '0') i++, j++;
            // deb2(ii, j);
            ans += solve(str.substr(ii, j));
        }
    }
    cout << ans << endl;
}