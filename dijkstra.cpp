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
    int dp[5][5] = {
        {10000000, 10000000, 1, 4, 10000000},
        {6, 10000000, 10000000, 10000000, 10000000},
        {10000000, 10000000, 10000000, 10000000, 10000000},
        {10000000, -1, 2, 10000000, 1},
        {10000000, 4, 3, 10000000, 10000000}
    };
    int path[5][5] = {
        {-1, -1,  0,  0, -1},
        { 0, -1, -1, -1, -1},
        {-1, -1, -1, -1, -1},
        {-1,  0,  0, -1,  0},
        {-1,  0,  0, -1, -1}
    }; 
    Loop(0, 5, k){
        Loop(0, 5, i) 
            Loop(0, 5, j){
                int temp = dp[i][k]+dp[k][j];
                if(temp < dp[i][j]) {
                    dp[i][j] = temp;
                    path[i][j] = k+1;
                }
            }
        deb(k+1);
        cout << "dp\n";
        Loop(0, 5, i) {
            Loop(0, 5, j) if(dp[i][j] == 10000000) cout << "- "; else cout << dp[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        cout << "path\n";
        Loop(0, 5, i) {
            Loop(0, 5, j) if(path[i][j] == -1) cout << "- "; else cout << path[i][j] << " ";
            cout << endl;
        }
        cout << endl << endl << endl;
    } 
}