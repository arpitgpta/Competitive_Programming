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
    string str;
    cin >> str;
    int len = str.length();
    int ans = 0;
    bool flag = false;
    if(len == 1){   
        if(str[0] == '0' || str[0] == '8') ans = str[0]-'0', flag = true;
    }
    else if(len == 2){
        int temp = (str[1]-'0')*10 + (str[0]-'0');
        if(temp%8 == 0) ans = temp, flag = true;
        else if(str[1] == '8' || str[1] == '0') ans = str[1]-'0', flag = true;
        else if(str[0] == '8') ans = 8, flag = true;
    }
    else{
        map<int, int> mp;
        for(int i = 100; i < 1000; i++) if(i%8 == 0){
            mp[i/10] = i%10;
        }
        bool arr[len][10];
        memset(arr, 0, sizeof(arr));
        for(int i = len-2; i >= 0; i--){
            for(int j = 0; j < 10; j++){
                arr[i][j] = arr[i+1][j];
            }
            arr[i][str[i+1]-'0'] = true;
        }
        // for(int i = 0; i < len; i++){
        //     cout << str[i] << " ";
        //     for(int j = 0; j < 10; j++) cout << arr[i][j] << " "; 
        //     cout << endl;
        // }
        for(int i = 0; i < len; i++){
            if((str[i]-'0')%8 == 0){ ans = str[i]-'0', flag = true; break;}
            for(int j = i+1; j < len; j++){
                int temp = (str[i]-'0')*10 + str[j]-'0';
                if(temp%8 == 0){
                    ans = temp;
                    flag = true;
                    break;
                }
                else{
                    if(arr[j][mp[temp]]) {ans = temp*10 + mp[temp], flag = true; break;}
                }
            }
        }
    }
    if(flag) cout << "YES\n" << ans << endl;
    else cout << "NO" << endl;
}