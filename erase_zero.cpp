// g++ erase_zero.cpp -o erase_zero && ./erase_zero

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
    cin >> t;
    string str;
    int len;
    while(t--){
        cin >> str;
        len = str.length();
        int last = 10000;
        int ans = 0;
        for(int i = 0; i < len; i++){
            if(str[i] == '1'){
                if(i - last > 1) {
                    ans += i - last - 1;
                }
                last = i;
            }
        }
        cout << ans << endl;
    }

}