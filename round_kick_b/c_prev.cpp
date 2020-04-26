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
    fastio;
    string str;
    w(t){
        cin >> str;
        int len = str.length();
        int tb[len][6];
        memset(tb, 0, sizeof(tb));
        int ptr = 0;
        tb[0][1] = 1;
        for(int i = 0; i < len; i++){
            if(str[i] == 'N') tb[ptr][2]++;
            else if(str[i] == 'S') tb[ptr][3]++;
            else if(str[i] == 'E') tb[ptr][4]++;
            else if(str[i] == 'W') tb[ptr][5]++;
            else if(str[i] == '('){
                tb[++ptr][1] = str[i-1]-'0';
            }
            else if(str[i] == ')'){
                tb[ptr-1][2] += tb[ptr][2]*tb[ptr][1];
                tb[ptr-1][3] += tb[ptr][3]*tb[ptr][1];
                tb[ptr-1][4] += tb[ptr][4]*tb[ptr][1];
                tb[ptr-1][5] += tb[ptr][5]*tb[ptr][1];
                tb[ptr][2] = tb[ptr][3] = tb[ptr][4] = tb[ptr][5] = 0; 
                ptr--;
            }
        }


        tb[0][2] = tb[0][1]*tb[0][2];
        tb[0][3] = tb[0][1]*tb[0][3];
        tb[0][4] = tb[0][1]*tb[0][4];
        tb[0][5] = tb[0][1]*tb[0][5];
        int x, y;
        x = y = 1;
        
        int tx;
        tx = tb[0][3] - tb[0][2];
        // deb(tx);
        int ty = tb[0][4] - tb[0][5];
        // deb(ty);
        if(tx < 0) x = 1000000001 + tx;
        else  x += tx;
        if(ty < 0) y = 1000000001 + ty;
        else y += ty;
        x %= 1000000000;
        y %= 1000000000;
        if(x == 0) x = 1000000000;
        if(y == 0) y = 1000000000;
        cout << "Case #" << t << ": " << y << " " << x << endl;
     }
}