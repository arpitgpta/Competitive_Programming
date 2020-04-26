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
    int k, l, u;
    cin >> k >> l >> u;
    string str;
    cin >> str;
    int len = str.length();
    int m = len/k;
    int r = len%k;
    vin arr(k, m);
    bool flag = true;
    if(m < l) flag = false;
    else if(r){
        if(u <= m) flag = false;
    }
    else if(u < m) flag = false;
    if(flag){
        loop(r) arr[i]++;
        int temp = 0;
        loop(k){
            cout << str.substr(temp, arr[i]) << endl;
            temp += arr[i];
        }
    }
    else{
        cout << "No solution" << endl;
    }
}