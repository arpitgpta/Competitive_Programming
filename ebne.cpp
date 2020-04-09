// g++ ebne.cpp -o ebne && ./ebne

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
#define loop(x) for (int i = 0; i < x; i++)

int main(){

    int t, len, new_len;
    string num;
    cin >> t;
    while (t--){
        int flag = 0;
        cin >> len;
        cin >> num;
        for (new_len = len-1; new_len >= 0; new_len--){
            if ( (num[new_len]-'0')%2 == 1 ) break;
        }
        num = num.substr(0, new_len+1);
        if (new_len < 0){
            flag = 1;
        }
        else{
            int odd_index = -1;
            int odds = 0, evens = 0;
            len = num.length();
            for (int i = len-1; i >= 0; i--){
                if ((num[i]-'0')%2 == 0) evens++;
                else{
                    odds++;
                    odd_index = i;
                }
            }
            if (odds%2){
                if(odd_index == len-1) flag = 1;
                string first = num.substr(0, odd_index);
                string second = num.substr(odd_index+1);
                num = first+second;
            }
            if (flag) cout << -1 << endl;
            else cout << num << endl;
        }
    }


}