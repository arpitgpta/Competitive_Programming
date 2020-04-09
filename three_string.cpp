// g++ three_string.cpp -o three_string && ./three_string

/*


*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cerr.tie(NULL)
#define endl '\n'
#define ll long long int
using namespace std;
#define pii pair <ll , ll >
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define loop(x) for (int i = 0; i < x; i++)
#define vin vector<int>
#define vll vector<long long>

int main(){

    fastio;    
    int t;
    string a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        int len = a.length();
        int flag = false;
        loop(len){
            if(a[i] != c[i] and b[i] != c[i]){
                flag= true;
                break;
            }
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}