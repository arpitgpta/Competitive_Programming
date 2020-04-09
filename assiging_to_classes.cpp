// g++ assiging_to_classes.cpp -o assiging_to_classes && ./assiging_to_classes

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
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n;
        vin arr(2*n);
        m = n*2;
        loop(m) cin >> arr[i];
        sort(arr.begin(), arr.end());
        cout << arr[n] - arr[n-1] << endl;
    }

}