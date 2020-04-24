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

int n, m, q;
int root_n;
bool fun(tuple<int, int, int> a, tuple<int, int, int> b){
    
    int p1 = get<1>(a)/root_n;
    int q1 = get<2>(a);

    int p2 = get<1>(b)/root_n;
    int q2 = get<2>(b);

    if(p1 == p2) return q1 < q2;
    else return p1 < p2;
}

int32_t main(){
    
    cin >> n >> m;
    root_n = sqrt(n);
    int arr[n+1];
    Loop(1, n+1, i) cin >> arr[i];
    int h[m+1];
    Loop(1, m+1, i) cin >> h[i];

    
    cin >> q;
    vec<tuple<int, int, int>> queries(q);
    loop(q){
        get<0>(queries[i]) = i;
        cin >> get<1>(queries[i]) >> get<2>(queries[i]);
    }
    sort(queries.begin(), queries.end(), fun);
    
    
    int l, r, count, correct;
    int crr[m+1];
    memset(crr, 0, sizeof(crr));
    l = r = get<1>(queries[0]);
    crr[arr[l]]++;
    count = 1;
    correct = 0;
    if(crr[arr[l]] == h[arr[l]]) correct++;
    int lq, rq;
    loop(q){
        lq = get<1>(queries[i]);
        rq = get<2>(queries[i]);
        deb2(lq, rq);
        // Loop(1, m+1, i) cout << crr[i] << " "; cout << endl;
        // cout << endl;



       while(r < rq){
            r++;
            if(crr[arr[r]] == h[arr[r]]) correct--;
            crr[arr[r]]++;
            if(crr[arr[r]] == 1) count++;
            if(crr[arr[r]] == h[arr[r]]) correct++;
        }

        // deb2(l, r);
        // deb(correct);
        // deb(count);
        // Loop(1, m+1, i) cout << crr[i] << " "; cout << endl;
        // cout << endl;
 
        while(r > rq){
            if(crr[arr[r]] == h[arr[r]]) correct--;
            crr[arr[r]]--;
            if(crr[arr[r]] == 0) count--;
            r--;
            if(arr[r] == arr[r+1] and crr[arr[r]] == h[arr[r]]) correct++;
        }


        // deb2(l, r);
        // deb(correct);
        // deb(count);
        // Loop(1, m+1, i) cout << crr[i] << " "; cout << endl;
        // cout << endl;


        while(l < lq){
            if(crr[arr[l]] == h[arr[l]]) correct--;
            crr[arr[l]]--;
            if(crr[arr[l]] == 0) count--;
            l++;
            if(arr[l] == arr[l-1] and crr[arr[l]] == h[arr[l]]) correct++;
            // deb2(l, r);
            // deb(correct);
            // deb(count);
            // Loop(1, m+1, i) cout << crr[i] << " "; cout << endl << endl;
        }
        // deb2(l, r);
        // deb(correct);
        // deb(count);
        // Loop(1, m+1, i) cout << crr[i] << " "; cout << endl;
        // cout << endl;

        while(l > lq){
            l--;
            if(crr[arr[l]] == h[arr[l]]) correct--;
            crr[arr[l]]++;
            if(crr[arr[l]] == 1) count++;
            if(crr[arr[l]] == h[arr[l]]) correct++;
        }
 
        // Loop(1, m+1, i) cout << crr[i] << " "; cout << endl;
        // deb(lq);
        // deb(rq);
        // deb(correct);
        // deb(count);
        // cout << endl;
        // cout << endl;
        cout << (correct == count) << endl << endl;
    }



}