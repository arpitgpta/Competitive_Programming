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

int neartst_pow_2(int a){
    int temp;
    for(int i = 1; i < 50; i++){
        if(pow(2, i) < a and pow(2, i+1) >= a) return pow(2, i+1);
    }
}
// class st{
//     public:
    
//     st(int n){
//         int a = this->nearest_pow_2(n);
//     }
// };

vec<bool> make_st(vin arr, int n){
    vec<bool> st(2*n, 1);
    Loop(n, 2*n, i) if(arr[i] == 1) st[i] = 1; else st[i] = 0;
    for(int i = n-1; i > 0; i--){
        arr[i] = arr[i*2] & arr[i*2+1];
    }
    return st;
}

void update(vec<bool> &arr, int ind, int val, int n){
    arr[n+ind-1] = val;
    for(int i = n-1; i > 0; i--){
        arr[i] = arr[i*2] & arr[i*2+1];
    }
}

int s(int a){return (a*(a+1))/2;}

int32_t main(){
    fastio;
    w(t){
        int n;
        cin >> n;
        vin arr(n);
        loop(n) cin >> arr[i];
        int sl = 0;
        int sr = 0;
        int el = 0;
        int er = n;
        int ans = 0;
        vec<pair<int, int>> vpi;
        loop(n) sr += arr[i];
        loop(n){
            sl += arr[i];
            sr -= arr[i];
            el++;
            er--;
            if(sl == s(el) and sr == s(er)){
                int t1[200000] = {0};
                int t2[200000] = {0};
                // Loop(1, el+1, p) t1[p] = 0; 
                // Loop(1, er+1, p) t2[p] = 0; 
                Loop(0, el, p) t1[arr[p]]++;
                Loop(el, n, p) t2[arr[p]]++;
                // deb(el);
                // Loop(0, el, p) cout << t1[arr[p]] << " "; cout << endl;
                // Loop(el, n, p) cout <<  t2[arr[p]] << " "; cout << endl;
                
                bool flag = true;
                Loop(1, el+1, p) if(t1[p] != 1){flag = false; break;}
                // deb(flag);
                Loop(1, n-el+1, p) if(t2[p] != 1){flag = false; break;}
                if(flag){
                    ans++;
                    vpi.pb({el, er});
                }
            }
        }
        cout << ans << endl;
        for(auto i : vpi){
            cout << i.first << " " << i.second << endl;
        }
    }
}