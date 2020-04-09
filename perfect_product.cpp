// g++ perfect_product.cpp -o perfect_product && ./perfect_product

/*


*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cerr.tie(NULL)
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

int nearest_2_raise_n(int k){
    for(int i = 1; i < 21; i++){
        if(k > pow(2, i-1) and k < pow(2, i)) return pow(2,i);
    }
}


int not_squres[1000010];

vin get_prime_squres(){
    vin primes={2,3,5};
    for(int i = 7; i < 101; i++){
        bool flag = true;
        for(auto j : primes)    if(!(i%j)){flag = false; break;}
        if(flag)    primes.pb(i);
    }
    int len = primes.size();
    // for(int i = 0; i < len; i++) primes[i] = primes[i]*primes[i];
    return primes;
}

void make_st(vector<vin>& arr, int a){
    for(int i = a; i > 2; i-=2) {
        arr[i/2][0] = not_squres[arr[i][0]*arr[i-1][0]];
        arr[i/2][1] = arr[i-1][1];
        arr[i/2][2] = arr[i][2];
    }
}

void update(vector<vin>& arr, int i){
    while(i > 1){
        if(i%2)    arr[i/2][0] = not_squres[arr[i][0]*arr[i-1][0]];
        else    arr[i/2][0] = not_squres[arr[i][0]*arr[i+1][0]];
        i/=2;
    }
}

int query(vector<vin>& arr, int start, int i, int j){
    if(arr[start][1] == arr[start][2]) return arr[start][0];
    if(arr[start][1] > j or arr[start][2] < i) return 1;
    if(arr[start][1] >= i and arr[start][2] <= j) return arr[start][0];
    return not_squres[not_squres[query(arr, 2*start, i, j)]*not_squres[query(arr, start*2+1, i, j)]];
}

int32_t main(){


    vin primes = get_prime_squres();
    
    unsigned int ans = 1;
    int total_primes = primes.size();
    cout << total_primes << endl;
    for(int i : primes) cout << i << " "; cout << endl;

    for(int i = 2; i < 1000005; i++){
        int temp = i;
        for(int j = 0; j < total_primes; j++)   while(!(temp%primes[j]))  temp /= primes[j];
        not_squres[i] = temp;
    }
    not_squres[1] = 1;
    
    int num, q, temp;
    cin >> num;
    int n = nearest_2_raise_n(num);
    vector<vin> arr(2*n, vin(3, 1));
    loop(n, n+num, i) {
        cin >> temp; 
        arr[i][0] = not_squres[temp]; 
    }
    loop(n, 2*n, i) arr[i][1] = arr[i][2] = i;
    make_st(arr, 2*n-1);

    loop(0,2*n, i) cout << arr[i][1] << " " << arr[i][2] << endl;

    // int k, l, r, i, val;
    
    // w(t){
    //     cin >> k;
    //     if(k == 1){
    //         cin >> l >> r;
    //         // int a = query(arr, l, r, 1, n+k-1);
    //     }
    //     else{
    //         cin >> i >> val;
    //         arr[i+n-1] = not_squres[arr[i+n-1]*val];
    //         update(arr, i+n-1);
    //     }
    // }
}