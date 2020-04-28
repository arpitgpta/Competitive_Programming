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
#define mod 1000000007

void fun(int a, vin lst = vin(), int tab = 0){
    if(a == 0){
        cout << lst.size() << endl;
        for(auto i : lst) cout << i << " "; cout << endl;
        return;
    }
    else{
        int aa = a;
        // deb(aa);
        int temp = 0;
        string str = "";
        while(aa){
            int k = aa%10;
            str += (k+'0');
            aa/=10;
        }    
        reverse(str.begin(), str.end());
        for(auto i : str){
            temp *= 10;
            if(i != '0') temp++;
        }
        lst.pb(temp);
        fun(a-temp, lst, tab+1);
    }
}

int32_t main(){
    int a;
    cin >> a;
    fun(a);
}