// g++ x.cpp -o x && ./x

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

struct dev{
    string comp;
    int bonus;
    map<string, bool> skills;
};

struct pm{
    string comp;
    int bonus;
};

int32_t main(){
    int w, h;
    cin >> w >> h;
    vec<string> floor(h);
    loop(0, h, i) cin >> floor[i];

    int d;
    cin >> d;
    vec<dev> devlopers(d);
    loop(0, d, i){
        cin >> devlopers[i].comp;   
        cin >> devlopers[i].bonus;
        int temp;
        cin >> temp;
        string st;
        loop(0, temp, j){
            cin >> st;
            devlopers[i].skills[st] = true;
        }     
    }    

    int m;
    cin >> m;
    vec<pm> pms(m);
    loop(0, m, i){
        cin >> pms[i].bonus;
        cin >> pms[i].bonus;
    }











    

}