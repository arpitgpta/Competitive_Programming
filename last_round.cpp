#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
// #define int long long int
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
#define arr_out(n, s) Loop(0, s, lout) cout << n[lout] << " ";
#define pi(x) printf("%lld ", x);
#define end cout << endl;

int dp2[1002][1002], dp5[1002][1002];
char p2[1002][1002], p5[1002][1002];
int arr[1002][1002];
int n, z = 0, zi, zj;
int get(int a, int t){
    int cnt = 0;
    while(a and a%t == 0) cnt++, a/=t;
    return cnt;
}

int find2(int i, int j){
    if(i >= n or j >= n) return INT_MAX;
    if(dp2[i][j] == -1){
        if(i == n-1 and j == n-1){
            dp2[i][j] = get(arr[i][j], 2);
        }
        else {
            dp2[i][j] = min(find2(i+1, j), find2(i, j+1)) + get(arr[i][j], 2);
            if(find2(i+1, j) < find2(i, j+1)) p2[i][j] = 'D';
            else p2[i][j] = 'R';
        }
    }
    return dp2[i][j];
}
int find5(int i, int j){
    if(i >= n or j >= n) return INT_MAX;
    if(dp5[i][j] == -1){
        if(i == n-1 and j == n-1){
            dp5[i][j] = get(arr[i][j], 5);
        }
        else {
            dp5[i][j] = min(find5(i+1, j), find5(i, j+1)) + get(arr[i][j], 5);
            if(find5(i+1, j) < find5(i, j+1)) p5[i][j] = 'D';
            else p5[i][j] = 'R';
        }
    }
    return dp5[i][j];
}

void print(int i, int j, int n){
    if(n == 2){
        if(p2[i][j] == 'R'){
            cout << 'R';
            print(i, j+1, 2);
        }
        else if(p2[i][j] == 'D'){
            cout << 'D';
            print(i+1, j, 2);
        }
    }
    else{
        if(p5[i][j] == 'R'){
            cout << 'R';
            print(i, j+1, 5);
        }
        else if(p5[i][j] == 'D'){
            cout << 'D';
            print(i+1, j, 5);
        }
    }
    return;
}

int32_t main(){
    // fastio;
    cin >> n;
    Loop(0, n, i) Loop(0, n, j){
        cin >> arr[i][j];
        dp2[i][j] = -1, dp5[i][j] = -1;
        if(arr[i][j] == 0) z = 1, zi = i, zj = j;
    }
    loop(n){
        dp2[0][n] = INT_MAX;
        dp5[0][n] = INT_MAX;
        dp2[n][0] = INT_MAX;
        dp5[n][0] = INT_MAX;
    }
    find5(0, 0);
    find2(0, 0);
    // Loop(0, n, i){
    //     Loop(0, n, j) cout << p2[i][j] << ' ';
    //     end;
    // }
    if(z and min(dp2[0][0], dp5[0][0]) > 1){
        cout << "1\n";
        for(int i = 0; i < zi; i++) cout << 'D';
        for(int i = 0; i < zj; i++) cout << 'R';
        for(int i = zi; i < n-1; i++) cout << 'D';
        for(int i = zj; i < n-1; i++) cout << 'R';
    }
    else{
        if(dp2[0][0] < dp5[0][0]){
            cout << dp2[0][0] << endl;
            p2[n-1][n-1] = ' ';
            print(0, 0, 2);
        }
        else{
            cout << dp5[0][0] << endl;
            p5[n-1][n-1] = ' ';
            print(0, 0, 5);
        }
    }
}