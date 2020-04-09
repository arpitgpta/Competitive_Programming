// g++ x.cpp -o x && ./x

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

int main(){

    fastio;    
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vin arr(n);
        loop(n) cin >> arr[i];
        int first = 0, last = n-1;
        loop(k) arr[first] < arr[last] ? first++ : last++;
        int temp = m-k-1;
        loop(temp) arr[first] > arr[last] ? first++ : last++;
        if (arr[first] > arr[last]) cout << arr[first] << endl;
        else cout << arr[last] << endl;
    }

}