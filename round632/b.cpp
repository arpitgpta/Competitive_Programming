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
    fastio;
    w(t){
        int n;
        cin >> n;
        vin a(n), b(n);
        vec<char> arr(n, 'n');
        loop(n) cin >> a[i];
        loop(n) cin >> b[i];
        loop(n){
            if(a[i] < b[i]) arr[i] = 'i';
            else if(a[i] > b[i]) arr[i] = 'd';
        }
        int first_pos = n, first_neg = n;
        loop(n){
            if(a[i] == 1){first_pos = i; break;}
        }
        loop(n) if(a[i] == -1){first_neg = i; break;}
        bool flag = true;
        // loop(n) cout << arr[i] << " "; cout << endl;
        // deb(first_pos);
        // deb(first_neg);
        loop(n){
            if(arr[i] == 'i'){
                if(first_pos >= i){
                    flag = false;
                    break;
                }
            }
            else if(arr[i] == 'd'){
                if(first_neg >= i){
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}