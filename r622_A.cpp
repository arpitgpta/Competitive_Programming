// g++ r622.cpp -o r622 && ./r622

/*


*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cerr.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)

int32_t main(){
    fastio;
    int a, b, c;
    w(t){
        cin >> a >> b >> c;
        int ans = 0;
        if(a >= 4 && b >= 4 && c >= 4) ans = 7;
        else if(a >= 3 && b >= 3 && c >= 3) ans = 6;
        else if((a >= 3 and b >= 2 and c >= 2) or (b >= 3 and a >= 2 and c >= 2) or (c >= 3 and a >= 2 and b >= 2)) ans = 5;
        else if((a >= 2 and b >= 2 and c >= 1) or (b >= 2 and a >= 1 and c >= 2) or (c >= 2 and a >= 2 and b >= 1)) ans = 4;
        else if((c >= 1 and a >= 1 and b >= 1)) ans = 3;
        else if((a >= 0 and b >= 1 and c >= 1) or (b >= 0 and a >= 1 and c >= 1) or (c >= 0 and a >= 1 and b >= 1)) ans = 2;
        else if((c >= 1 or a >= 1 or b >= 1)) ans = 1;
        cout << ans << endl;

    }
}