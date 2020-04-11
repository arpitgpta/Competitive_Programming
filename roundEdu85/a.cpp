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
#define end printf("\n");

int32_t main(){
    fastio;
    w(t){
        int n;
        cin >> n;  
        int p1, c1;
        int p2, c2;
        if(n == 1) {
            cin >> p1 >> c1;
            if(c1 > p1) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
        else{
            cin >> p1 >> c1;
            
            bool flag = true;
            if(c1 > p1) flag = false;
            loop(n-1){
                cin >> p2 >> c2;
                if(c2 > p2) flag = false;
                if(c2 < c1) flag = false;
                if(p2 < p1) flag = false;
                if(c2-c1 > p2-p1) flag = false;

                p1 = p2;
                c1 = c2;
            }
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}