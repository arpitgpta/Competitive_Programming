// g++ ayoubs_string.cpp -o ayoubs_string && ./ayoubs_string

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
#define loop(s, e, var) for (int var = s; var < e; var++)
#define vin vector<int>
#define vll vector<long long>
#define hack(x, n , v) for(int v = x; v < n; v++)

int main(){

    fastio;    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int len = (n-m)/(m+1);
        int t1 = (n-m)%(m+1);
        int t2 = m+1-t1; 
        ll temp = t2*(len*(len+1)/2);
        len++;
        temp += t1*(len*(len+1)/2);
        ll ans = n*(n+1)/2 - temp;
        cout << ans << endl;       
    }
}