/*


*/

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
#define mod 998244353

int fun(int a){
    if(a%4 == 0) return a;
    if(a%4 == 1) return 1;
    if(a%4 == 2) return a+1;
    return 0; 
}

int Xor(int a, int b){
    return fun(a-1)^fun(b);
}


// int fun(int a, int b){
//     if((a >= 0 and b == 1) or (a == 0 and b >= 0)) return 1;
//     if(a > 0 and b <= 0) return 0;
//     int temp = 0;
//     if(dp[{a, b}] == 0){
//         loop(a+1) temp += fun(i, b-1);
//         dp[{a, b}] = temp;
//     }
//     return dp[{a, b}];
// }

// int32_t main(){cout << fun(1,4) << endl;}

int32_t main(){

    int n, q;
    cin >> n >> q;
    int arr[n] = {0};
        for(int i=0;i<q;i++)
        {
            int c,x;
            cin >> c >> x;
            if(c==1){
                arr[x-1]++;
                for(int j = 0; j < n; j++) cout << arr[j] << " "; cout << endl;
            }
            else
            {
                int Xor=0;
                vin temp;
                for(int j=x-1;j<n;j++)
                {   
                    if(arr[j]==0)
                    {
                        Xor=Xor^(j+1);
                        temp.pb(j+1);
                    }
                    else
                    {
                        if(Xor!=0)
                            break;
                    }
                    deb2(j, Xor);
                }
                for(auto j : temp) cout << j << " "; cout << endl;
                cout << Xor << endl;
            }
        }
}