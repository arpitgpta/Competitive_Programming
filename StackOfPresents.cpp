// g++ StackOfPresents.cpp -o StackOfPresents && ./StackOfPresents

/*

*/

#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> table(n+1);
        for(int i = 1; i <= n; i++){
            int temp;
            cin >> temp;
            table[temp] = i;
        }
        int CI = 1;
        int ans = 0;
        for(int i = 0; i < m; i++){
            int temp; 
            cin >> temp;
            int psn = table[temp];
            // deb2(psn, CI);
            if(psn < CI) ans++;
            else{
                int k = (psn-CI-i)*2;
                if (k < 0) k = 0;
                ans = ans + k + 1;
                CI = psn;
            }
        }
        cout << ans << endl;
    }
}