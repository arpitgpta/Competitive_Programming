#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cerr.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define pb push_back
#define loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)

vin get_arr(int n){
    vin arr;
    while(n){
        arr.pb(n%10);
        n/=10;
    }
    return arr;
}

int32_t main(){
    fastio;
    int n;
    w(t){
        cin >> n;
        vin arr = get_arr(n);
        sort(arr.begin(), arr.end());
        bool flag = false;
        int len = arr.size();
        for(int i = 1; i < len; i++){
            if(arr[i] - arr[i-1] > 2){flag = true; break;}
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}