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
    int n;
    int max, p;
    int p2;
    w(t){
        cin >> n;
        vin arr(n);
        loop(n) cin >> arr[i];
        max = INT_MIN;
        loop(n) max = max < arr[i] ?  arr[i] : max;
        int pos = -1;
        loop(n) if(arr[i] == max){pos = i; break;}
        vin ar2(2*n);
    }
}