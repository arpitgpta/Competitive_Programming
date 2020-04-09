// g++ FadiLcm.cpp -o FadiLcm && ./FadiLcm

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


bool fun(pair<ll, ll> a, pair<ll, ll> b){
    return max(a.first, a.second) < max(b.first, b.second);
}

int main(){

    ll n;
    cin >> n;
    ll cn = n;

    vector<ll> factors;
    ll root_n = sqrt(n);
    for (ll i = 2; i < root_n; i++){
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    int size = factors.end() - factors.begin();
    if(size){       
        vector<pair<ll, ll>> multiple(size);
        multiple[0].first = factors[0];
        multiple[0].second = cn/factors[0];
        // for(auto i : factors) cout << i << " "; cout << endl;
        for(int i = 1; i < size; i++){
            multiple[i].first = multiple[i-1].first*factors[i];
            multiple[i].second = cn/multiple[i].first;
        }
        sort(multiple.begin(), multiple.end(), fun);
        cout << multiple[0].first << " " << multiple[0].second << endl;
    }    
    else {
        cout << 1 << " " << cn << endl;
    }
    return 0;
}