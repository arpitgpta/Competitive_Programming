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

int pow_2[35];
vin sum2(35, 0);

bool check(int a, int b){
    loop(31) if(((a&pow_2[i]) == pow_2[i]) and ((b&pow_2[i]) == pow_2[i])) return false;
    return true;
}

int32_t main(){
    // fastio;
    loop(31) pow_2[i] = pow(2, i);
    sum2[0] = 1;
    Loop(1, 31, i) sum2[i] = sum2[i-1] + pow_2[i];
    w(t){
        int x, y;
        cin >> x >> y;        
    
        char *ans;
        if((x+y)%2 == 0)
            cout << "Case #" << t << ": IMPOSSIBLE" << endl;
        else{
            int c = lower_bound(sum2.begin(), sum2.end(), abs(x)+abs(y)) - sum2.begin()+1;
            int diff = *lower_bound(sum2.begin(), sum2.end(), abs(x)+abs(y)) - (abs(x)+abs(y));
            diff /= 2;
            // deb2(diff, c);
            bool flag = true;
            if(x%2){
                flag &= check(abs(x)+2*diff, abs(y));
                loop(31) {
                    // deb((diff&pow_2[i]));
                    // deb((y&pow_2[i]));
                    flag &= check(diff, y);
                    // deb(flag);
                    // cout << endl;

                }
                if(x > 0){
                    ans = new char[c];
                    loop(c) ans[i] = 'E';
                    if(diff){
                        loop(31) if(diff&pow_2[i]) ans[i] = 'W';
                    }
                }
                else{
                    ans = new char[c];
                    loop(c) ans[i] = 'W';
                    if(diff){
                        loop(31) if(diff&pow_2[i]) ans[i] = 'E';
                    }
                }
                if(y > 0){
                    loop(31) if(y&pow_2[i]) ans[i] = 'N';
                }
                else{
                    y *= -1;
                    loop(31) if(y&pow_2[i]) ans[i] = 'S';
                }
            }
            else{
                loop(31) if(diff&pow_2[i] == 1 and x&pow_2[i]) flag = false;
                flag &= check(abs(y)+2*diff, abs(x));
                if(y > 0){
                    ans = new char[c];
                    loop(c) ans[i] = 'N';
                    if(diff){
                        loop(31) if(diff&pow_2[i]) ans[i] = 'S';
                    }
                }
                else{
                    ans = new char[c];
                    loop(c) ans[i] = 'S';
                    if(diff){
                        loop(31) if(diff&pow_2[i]) ans[i] = 'N';
                    }
                }
                if(x > 0){
                    loop(31) if(x&pow_2[i]) ans[i] = 'E';
                }
                else{
                    x *= -1;
                    loop(31) if(x&pow_2[i]) ans[i] = 'W';
                }
            }
            if(flag){
                cout << "Case #" << t << ": ";
                loop(c) cout << ans[i]; cout << endl;
            }
            else cout << "Case #" << t << ": IMPOSSIBLE" << endl;
        }
    }
}