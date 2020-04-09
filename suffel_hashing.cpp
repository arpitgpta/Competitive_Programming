// g++ suffel_hashing.cpp -o suffel_hashing && ./suffel_hashing
#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " " << x << endl;
int main(){
    int t;
    cin >> t;
    string p, h;
    while(t--){

        cin >> p;
        cin >> h;
        int pass_len = p.length();
        int hash_len = h.length();
        vector<int> table(26, 0);
        vector<int> pass_table(26, 0);
        for(int i = 0; i < pass_len; i++){
            table[h[i]-'a']++;
            pass_table[p[i]-'a']++;
        }
        int temp = h.length() - pass_len;
        if(temp < 0) 
        {
            cout << "NO" << endl;
            continue;
        }
        int flag = 0;
        // deb(temp);
        for(int i = 0; i <= temp; i++){

            flag = 0;
            for(int j = 0; j < 26; j++){
                if(pass_table[j] != table[j]){
                    flag = 1;
                    // deb(flag);
                    break;
                } 
            }
            if(flag == 0) break;
            table[h[i]-'a']--;
            table[h[i+pass_len]-'a']++;
            // deb(i);
            // deb(h[i]-'a');
            // deb(h[i+pass_len]-'a');
            // cout << endl;
        }
        if(flag == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}