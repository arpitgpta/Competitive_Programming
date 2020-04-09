<<<<<<< HEAD
// g++ array_sharpning.cpp -o array_sharpning && ./array_sharpning

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
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        vin arr(n);
        loop(n) cin >> arr[i];
        bool flag = false;
        loop(n/2+1) if (arr[i] < i or arr[n-1-i] < i)  {flag = true; break;}
        if (!(n%2)){
            if (arr[n/2] >= n/2 or arr[n/2-1] >= n/2) flag = false;
        }
        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
=======
// g++ array_sharpning.cpp -o array_sharpning && ./array_sharpning

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
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        vin arr(n);
        loop(n) cin >> arr[i];
        bool flag = false;
        loop(n/2+1) if (arr[i] < i or arr[n-1-i] < i)  {flag = true; break;}
        if (!(n%2)){
            if (arr[n/2] >= n/2 or arr[n/2-1] >= n/2) flag = false;
        }
        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
>>>>>>> accepted
}