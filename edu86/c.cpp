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

int a, b, q;

int get(int n){
    if(n < b) return 0;
    if(b%a == 0) return 0;
    int l = (a*b)/(__gcd(a, b));
    deb(l);
    int c = n/l;
    int ans = b-1;
    deb(ans);
    if(c != 0){
        ans +=  (c-1)*b;
        deb(ans);
        ans += min(b, n-((n/l)*l));
        deb(ans);
    }
    return n - ans;
}

int32_t fun(){
    int a = 13, b = 17;
    int count = 0;
    int temp = 0;
    Loop(1, 461, i){
        int p = ((i%a)%b);
        int q = ((i%b)%a);
        if(p == q) temp++;
        else count++; 
    }
    deb(temp);
    return count;
}

int32_t main(){
    fastio;
    w(t){
        cin >> a >> b >> q;
        if(a > b) swap(a, b);
        int l, r;
        loop(q){
            cin >> l >> r;
            int p = get(r);
            int q = get(l-1);
            // deb2(p, q);
            cout << p - q << " ";
        }        
        cout << endl;
    }
    cout << fun() << endl;
}