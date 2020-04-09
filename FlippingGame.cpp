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

int32_t main(){
    int n, a;
    cin >> n;
    int cnt_0 = 0, cnt_1 = 0, cnt_max0 = 0;
    while(n--){
        cin >> a;
        if(a == 0){
            z++;
            if(z > mz) mz = z;
        }
        else{
            o++;
            if(z > 0) z--;
        }
    }

    cout << cnt_1+cnt_max0 << endl;
}
int main(){

    int n,a,cnt_1=0,cnt_0=0,cnt_max0=-1;
    cin>>n;
    while(n--){
        cin>>a;
        if(a==1){
            cnt_1++;
            if(cnt_0>0){
                cnt_0--;
            }
        }
        if(a==0){
            cnt_0++;
            if(cnt_0>cnt_max0)
                cnt_max0=cnt_0;
        }
    }
    int ans=cnt_1+cnt_max0;
    cout<<ans<<endl;
    return 0;
}