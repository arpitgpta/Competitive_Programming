// g++ round621_C.cpp -o round621_C && ./round621_C

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


int32_t main(){
    fastio;
    string str;
    cin >> str;
    int len = str.size();
    int freq_table[len][5] = {0};    
    for(int i = 0; i < len; i++){
        freq_table[i][str[i]-'a']++;
    }

    for(int i = 1; i < len; i++){
        for(int j = 0; j < 5; j++){
            freq_table[i][j] += freq_table[i-1][j];
        }
    }

    for(int i = 0; i < len; i++) cout << str[i] << " "; cout << endl;
    for(int j = 0; j < 5; j++){
        for(int i = 0; i < len; i++){
            cout << freq_table[i][j] << " ";
        }
        cout << endl;
    }
    int ans_table[26][26] = {0};
    int temp = 0, t1 = 0;
    int charno;
    for(int i = 1; i < len; i++){
        cout << endl;
        cout << i << " " << str[i] << endl;
        charno = str[i]-'a';
        deb(freq_table[i][charno]);
        for(int j = 0; j < 5; j++){
            if(charno != j) ans_table[charno][j] += (freq_table[len-1][j] - freq_table[len-1][j]);
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
    }
}