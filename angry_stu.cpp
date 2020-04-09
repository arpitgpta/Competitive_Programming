// g++ angry_stu.cpp -o angry_stu && ./angry_stu

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
#define loop(n) for(int i = 0; i < n; i++)

int main(){

    fastio;    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;

        char q0, q1;
        int start;
        int ans;
        for(int i = 1; i < n; i++){
            q0 = a[i-1];
            q1 = a[i];

            if(q0 == 'A' && q1 == 'P'){
                start = i;
            }
            else if(q0 == 'P' && q1 == 'A'){
                int temp = i - start;
                ans = ans > temp ? ans : temp;
                start = -1;
            }
        }
        if(start != -1){
            int temp = n-start;
            ans = ans > temp ? ans : temp;
        }

        cout << ans << endl;
    }


}