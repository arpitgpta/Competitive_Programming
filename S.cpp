// g++ S.cpp -o S && ./S

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
#define loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)

vin gl_ans;

bool fun(vin arr, vin ans, map<int, bool> occupied, int tab){
    if(arr.size() == 0){
        gl_ans = ans;
        return true;
    }
    for(int i : arr){
        int in = ans.size()+1;
        if(!occupied[in-i]){
            map<int, bool> new_occupied = occupied;
            new_occupied[in-i] = true;
            vin new_arr, new_ans;
            int count = 0;
            for(int j: arr){
                if(j != i) new_arr.pb(j);
                else count++;
            } 
            count--;
            while(count--) new_arr.pb(i);
            new_ans = ans;
            new_ans.pb(i);
            bool ok = fun(new_arr, new_ans, new_occupied, tab+1);
            if(ok) {
                return true;
            }
        }
    }
    return false;
}

int32_t main(){
    // fastio;
    w(t){
        int n;
        cin >> n;
        cout << n << endl;
        vin arr(n+1);
        loop(1, n+1, i) cin >> arr[i];
        sort(arr.begin()+1, arr.end());
        map<int, bool> occupied;
        int fo = 1, la = n;
        int i = 1;
        while(fo < la){
            cout << fo << " " << la << endl;
            if(!occupied[fo-arr[fo]]){
                occupied[fo-arr[fo]] = true;
                fo++;
            }
            else{
                while(la > 0){
                    if(!occupied[la-arr[la]]){
                        occupied[la-arr[la]] = true;
                        la--;
                    }
                    else break;
                }{
                    int temp = arr[fo];
                    arr[fo] = arr[la];
                    arr[la] = temp;
                }
            }
        }
        
        for(int i = 1; i <= n; i++) cout << arr[i] << " "; cout << endl;
        gl_ans = {};
    }
}