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

int32_t main(){
    // fastio;
    w(t){
        int n;
        cin >> n;
        // vector<string> arr(n, "");
        // loop(n) cin >> arr[i];
        string str;
        string crr_pre = "", crr_suff = "";
        string temp;
        int len = 0;
        int j;
        bool flag = true;
        string mid = "";
        string m = "";
        flag = true;
        loop(n){
            cin >> str;
            j = 0; 
            len = str.length();
            temp = "";
            while(j < len and str[j] != '*'){
                temp += str[j];
                j++;
            }
            j++;
            m = "";
            while(j < len){
                if(str[j] == '*') mid += m, m = "";
                else m += str[j];
                j++;
            }
            // deb2(m, mid);
            if(temp.length() > crr_pre.length()){
                for(int j = 0; j < crr_pre.length(); j++) if(temp[j] != crr_pre[j]) flag = false;
                crr_pre = temp;
            }
            else{
                for(int j = 0; j < temp.length(); j++) if(temp[j] != crr_pre[j]) flag = false;
            }
            
            j = len-1;
            temp = "";
            while(j >= 0 and str[j] != '*'){
                temp += str[j];
                j--;
            }
            // reverse(temp.begin(), temp.end());
            if(temp.length() > crr_suff.length()){
                for(int j = 0; j < crr_suff.length(); j++) if(temp[j] != crr_suff[j]) flag = false;
                crr_suff = temp;
            }
            else{
                for(int j = 0; j < temp.length(); j++) {
                    if(temp[j] != crr_suff[j]) flag = false;
                }
            }
        }        
        cout << "Case #" << t << ": ";
        if(flag){
            cout << crr_pre;
            cout << mid;
            reverse(crr_suff.begin(), crr_suff.end());
            cout << crr_suff << endl;
        }
        else cout << "*" << endl;
    }
}