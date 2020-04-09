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
    int a, b, c, d;
    int x, y, x1, y1, x2, y2;
    w(t){
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        bool flag = true;
        if(a == b and a != 0){
            if(x1 == x and x2 == x) flag = false; 
        }
        else if(a > b){
            if((a-b) > (x-x1)) flag = false;
        }
        else
        {  
            if((b-a) > (x2-x)) flag = false;
        }

        if(c == d and c != 0){
            if(y1 == y and y2 == y) flag = false;
        }
        else if(c > d){
            if((c-d) > (y-y1)) flag = false;
        }   
        else{
            if((d-c) > (y2-y)) flag = false;
        }   
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}