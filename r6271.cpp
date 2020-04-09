// g++ 6.cpp -o 6 && ./6

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
#define vec vector

int find_up(int i, vec<vin> arr){

    int h = arr.size();
    int l = 0;
    int m;

    if(arr[0][0] > i) return 0;
    if(arr[h-1][0] < i) return -1;

    while(h < l){
        m = (h+l)/2;
        if(arr[m][0] > i and arr[m-1][0] < i) return m;
        if(arr[m][0] < i) l = m+1;
        else h = m-1; 
    }
    return -1;
}

int find(int i, vector<vin> arr){
    int h = arr.size();
    int l = 0;
    int m;
    while(h > l){
        m = (h+l)/2;
        if(arr[m][0] == i) return m;
        if(arr[m][0] > i) h = m-1;
        else l = m+1;
    }
    return -1;
}

int32_t main(){
    // fastio;
    int n;
    cin >> n;
    vin ai(n), bi(n);
    loop(0, n, i) cin >> ai[i];
    loop(0, n, i) cin >> bi[i];
    loop(0, n, i) ai[i] -= bi[i];

    vector<vin> pos, neg_z;
    vin temp(3);
    loop(0, n, i){
        temp[0] = i;
        temp[1] = ai[i];
        if(ai[i] > 0) pos.pb(temp);
        else neg_z.pb(temp);
    }
    int pos_len = pos.size();
    int neg_len = neg_z.size();

    pos[pos_len-1][2] = pos[pos_len-1][1];
    for(int i = pos_len-2; i >= 0; i--){
        pos[i][2] = min(pos[i][1], pos[i+1][2]);
    }

    neg_z[neg_len-1][2] = neg_z[neg_len-1][1];
    for(int i = neg_len-2; i >= 0; i--){
        neg_z[i][2] = min(neg_z[i][1], neg_z[i+1][2]);
    }
    cout << "ok0" << endl;
    for(auto i : pos) cout << i[0] << " " << i[1] << " " << i[2] << endl; cout << endl;
    cout << "ok1" << endl;
    for(auto i : neg_z) cout << i[0] << " " << i[1] << " " << i[2] << endl; cout << endl;
    cout << "ok2" << endl;
    pos[pos_len-1][2] = pos[pos_len-1][1];
    cout << "ok3" << endl;
    int q;
    int t;
    cin >> t;
    while(t--){
        cin >> q;
        cout << find(q, pos) << endl;
        cout << find(q, neg_z) << endl << endl;
    }
    // int ans = 0;
    // for(int i = 0; i < n-1; i++){
    //     int ind = find(i, pos);
    //     if(ind != -1){
    //         ans += pos_len-ind-1;
    //         int id = find_up(i, neg_z);
    //     }
    //     else{
    //         ind = find(i, neg_z);

    //     }
    // }

}