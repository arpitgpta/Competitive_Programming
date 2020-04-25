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
#define mod  (int)998244353 

int XOR[4][4] = {
//   0  1  2  3
    {0, 1, 2, 3}, // 0
    {1, 0, 3, 2}, // 1
    {2, 3, 0, 1}, // 2 
    {3, 2, 1, 0}  // 3
};

int AND[4][4] = {
    {0, 0, 0, 0},
    {0, 1, 2, 3},
    {0, 2, 2, 0},
    {0, 3, 0, 3}
};

int OR[4][4] = {
    {0, 1, 2, 3},
    {1, 1, 1, 1},
    {2, 1, 2, 1},
    {3, 1, 1, 3}
};

stack<vin> answers;
stack<char> ops;

int power(int a, int p){
    if(p == 0) return 1;
    int t = power(a, p/2)%mod;
    if(p%2 == 0) return (t*t)%mod;
    else return (((t*t)%mod)*a)%mod;
}

int inv(int a){
    return power(a, mod-2)%mod;
}

int mul(int a, int b)
{
	a %= mod;
	b %= mod;

	return (a * b) % mod;
}
int modinv_of_2 = power(2, mod - 2);


void solve(){
    vin ans2 = answers.top();
    answers.pop();

    vin ans1 = answers.top();
    answers.pop();

    char op = ops.top();
    ops.pop();

    vin ans(4, 0);
    int a = 2;
    int A = 3;
    switch (op){
        case '&':
            ans[0] = mul(ans1[0], ans2[1] + ans2[a] + ans2[A]) + mul(ans1[1] + ans1[a] + ans1[A], ans2[0]) + mul(ans1[0], ans2[0])
                    + mul(ans1[a], ans2[A]) + mul(ans1[A], ans2[a]);
            ans[1] = mul(ans1[1], ans2[1]);
            break;

        case '|':
            ans[0] = mul(ans1[0], ans2[0]);
            ans[1] = mul(ans1[1], ans2[0] + ans2[a] + ans2[A]) + mul(ans1[0] + ans1[a] + ans1[A], ans2[1]) + mul(ans1[1], ans2[1])
                    + mul(ans1[a], ans2[A]) + mul(ans1[A], ans2[a]);
            break;

        case '^':
            ans[0] = mul(ans1[0], ans2[0]) + mul(ans1[1], ans2[1]) + mul(ans1[a], ans2[a]) + mul(ans1[A], ans2[A]);
            ans[1] = mul(ans1[0], ans2[1]) + mul(ans1[1], ans2[0]) + mul(ans1[a], ans2[A]) + mul(ans1[A], ans2[a]);
            break;
	}

	ans[0] %= mod;
	ans[1] %= mod;

	int prob_gone = (ans[0] + ans[1]) % mod;
	int rem_prob = (1 - prob_gone + mod) % mod;

	ans[a] = ans[A] = mul(rem_prob, modinv_of_2);

	answers.push(ans);

}

vin ones;

int32_t main(){
    
    string str;
    vin ans;
    int temp = inv(4)%mod;
    ones = vin(4, temp);
    w(t){
        cin >> str;
        for(char i : str){
            if(i == '(') continue;
            if(i == ')') solve();
            else if(i == '#') answers.push(ones);
            else ops.push(i);
        }
        ans = answers.top();
        loop(4){
            cout << (ans[i])%mod << " ";
        }
        cout << endl;
    }    
}