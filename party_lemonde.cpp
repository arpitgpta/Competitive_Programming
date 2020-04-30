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

int arr[36];

int cost(int a){
    int ans = 0;
    loop(35){
        if(a & (int)pow(2, i)) ans += arr[i];
    }
    return ans;
}

int msb(int a){
    for(int i = 60; i >= 0; i--){
        if(a & (int)pow(2, i)) return i+1;
    }
    return 0;
}

int firstz(int a){
    loop(35){
        if(!(a & (int)pow(2, i))) return i;
    }
}

vin getm(int l){
    int f = 1e10+5;
    vin ans;
    while(l < f){
        int x = firstz(l);
        l += pow(2, x);
        int l1 = l;
        for(int j = 0; j < x; j++){
            if(l1 & (int)pow(2, j)){
                l1 -= pow(2, j);
            }
        }
        ans.pb(l1);
    }
    return ans;
}


int32_t main(){
    
    loop(35) arr[i] = 1e18;
    int n, l;
    cin >> n >> l;
    loop(n) cin >> arr[i];
    for(int i = 1; i < 35; i++){
        arr[i] = min(arr[i], 2*arr[i-1]);
    }
    int ans = cost(l);
    vin M = getm(l);
    for(auto i : M) ans = min(ans, cost(i));
    cout << ans << endl;
}



//                    solution by tourist                     \\


// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//   int n, L;
//   scanf("%d %d", &n, &L);
//   vector<int> c(n);
//   for (int i = 0; i < n; i++) {
//     scanf("%d", &c[i]);
//   }
//   for (int i = 0; i < n - 1; i++) {
//     c[i + 1] = min(c[i + 1], 2 * c[i]);
//   }
//   long long ans = (long long) 4e18;
//   long long sum = 0;
//   for (int i = n - 1; i >= 0; i--) {
//     int need = L / (1 << i);
//     sum += (long long) need * c[i];
//     L -= need << i;
//     ans = min(ans, sum + (L > 0) * c[i]);
//   }
//   cout << ans << endl;
//   return 0;
// }