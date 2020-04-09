// g++ swap_to_plnd.cpp -o swap_to_plnd && ./swap_to_plnd

/*


*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cerr.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)

int32_t main(){
    fastio;
    int n;
    string str;
    string rev_str;
    w(t){
        cin >> n;
        cin >> str;
        rev_str = str;
        reverse(rev_str.begin(), rev_str.end());
        int i = 0;
        int ans = 0;
        bool flag = false;
        if(n%2){
            int n_by2 = (n-2)/2;
            while(i < n_by2){
                if(str[i] == rev_str[i]) i++;
                else if(str[i] == rev_str[i+1] and str[i+1] == rev_str[i]) i += 2, ans++;
                else{flag = true; break;}
            }
            if(str[n/2+1] != str[n/2-1]){
                if(str[n/2+1] == str[n/2] or str[n/2-1] == str[n/2]) ans++;
                else flag = true;
            }
        }
        else{
            for(i = 1; i <= n/2+1; i++){
                if(str[n/2-i+1] != str[n/2+i]){
                    if(str[n/2-i+1] == str[n/2+i+1] and str[n/2-i+2] != str[n/2+i]) i ++;
                    else{
                        flag = true;
                        break;
                    }
                } 
            }
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES\n" << ans << endl; 
    }
}