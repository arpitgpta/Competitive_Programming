// g++ meso_zoma.cpp -o meso_zoma && ./meso_zoma

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


int main(){

    fastio;    
    int n;
    cin >> n;
    string str;
    cin >> str;
    int nl = 0;
    int nr = 0;
    for(int i = 0; i < n; i++){
        if (str[i] == 'L') nl++;
        else nr++;
    }
    cout << nl+nr+1 << endl;
}