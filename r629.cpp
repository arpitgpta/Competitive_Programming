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
    int n;
    w(t){
        cin >> n; vin arr(n);
        loop(n) cin >> arr[i];
        int temp = arr[0];
        bool flag = true;
        Loop(1, n, i) if(arr[i] != temp){flag = false; break;}
        if(flag){
            cout << "1\n";
            loop(n) cout << "1 "; cout << endl;
        }
        else{
            if(n%2 == 0 or arr[0] == arr[n-1]){
                // cout << "case 2" << endl;
                cout << 2 << endl;
                loop(n) if(i%2) cout << "2 "; else cout << "1 "; cout << endl;
            }
            else{
                int at;
                flag = false;
                loop(n-1) if(arr[i] == arr[i+1]){ flag = true; at = i; break;}
                if(flag){
                    cout << "case 3, at = " << at << endl;
                    cout << 2 << endl;
                    loop(at+1) if(i%2) cout << "2 "; else cout << "1 ";
                    Loop(at+1, n, i) if(i%2) cout << "1 "; else cout << "2 ";
                    cout << endl;
                }
                else{
                    // cout << "case 4" << endl;
                    cout << 3 << endl;
                    loop(n-1) if(i%2) cout << "2 "; else cout << "1 ";
                    cout << 3 << endl;
                }
            }
        }
    }
}