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

int minfun(int len, int val, int tab){
    if(len == 1) return val;
    
    int a = val - (len-1)*9;
    int temp = max((int)0, a);
    a = minfun(len-1, val-temp, tab+1);
    return temp*(pow(10, len-1))+a;
}

int maxfun(int len, int val, int tab){
    if(len == 1) return val;
    
    int a = min((int)9, val);
    int temp = maxfun(len-1, val-a, tab+1);
    return a*(pow(10, len-1))+temp;
}

int32_t main(){
    int len, val;
    cin >> len >> val;
    string Min, Max;
    int x = val;
    if(val == (int)0 and len == 1) cout << "0 0\n";
    else if(val < 1 or val > 9*len) cout << "-1 -1\n";
    else{
        loop(len){
            if(x >= 9){
                Max += "9";
                x -= 9;
            }
            else {
                Max += ('0'+x); x = 0;
            }
        }
        Min = Max;
        reverse(Min.begin(), Min.end());
        if(Min[0] == '0'){
            Loop(1, len, i){
                if(Min[i] != '0'){
                    Min[0] = '1', Min[i]--;
                    break;
                }
            }
        }
        cout << Min << " " << Max << endl;
    }
    // cout << Max << endl;
    
    // if(val < 1 or val > 9*len) Min = -1;
    // else {
    //     if(len == 1) Min = val;
    //     else{
    //         int a = val - (len-1)*9;
    //         int temp = max((int)1, a);
    //         a = minfun(len-1, val-temp, 0);
    //         Min = temp*(pow(10, len-1))+a;
    //     }
    //     // Min = minfun(len, val, 0);
    // }

    // if(val < 1 or val > 9*len) Max = -1;
    // else {
    //     Max = maxfun(len, val, 0);
    // }
    // cout << Min << " " << Max << endl;
}