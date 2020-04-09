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
#define Loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define loop(n) for(int i = 0; i < n; i++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)
#define vec vector

int32_t main(){
    // fastio;
    int t;
    int b;
    cin >> t >> b; 
    for(int T = 0; T < t; T++){
        // cout << "enter 20" << endl;
        // cin >> b; 
        // deb(b);
        vin crr(b+1, -1);
        Loop(1, 6, i){
            cout << i << endl;
            cout.flush();
            cin >> crr[i];
            cout << b-i+1 << endl;
            cout.flush();
            cin >> crr[b-i+1];
        }        
        int known = 5;
        int quries = 10;
        
        
        bool done = false;
        // Loop(1, b+1, i) cout << crr[i] << " "; cout << endl;
        
        while(1){
            // cout << "case 2" << endl;
            map<pii, pii> mp;
            bool known00(false), known01(false);
            Loop(1, known+1, i){
                if(crr[i] == 0 and crr[b-i+1] == 0){
                    if(known00){
                        // cout << "case 0" << endl;
                        crr[i] = mp[{0,0}].first;
                        crr[b-i+1] = mp[{0,0}].second;
                    }
                    else{
                        // cout << "case 1" << endl;
                        int temp1, temp2;
                        cout << i << endl;
                        cout.flush();
                        cin >> temp1;
                        cout << b-i+1 << endl;
                        cout.flush();
                        cin >> temp2;
                        crr[i] = temp1;
                        crr[b-i+1] = temp2;
                        mp[{0, 0}] = {temp1, temp2};
                        mp[{1, 1}] = {1-temp1, 1-temp2}; 
                        quries += 2;
                        known00 = true;
                    }
                }
                else if(crr[i] == 0 and crr[b-i+1] == 1){
                    if(known01){
                        // cout << "case 2" << endl;
                        crr[i] = mp[{0,1}].first;
                        crr[b-i+1] = mp[{0,1}].second;
                    }
                    else{
                        // cout << "case 3" << endl;
                        int temp1, temp2;
                        cout << i << endl;
                        cout.flush();
                        cin >> temp1;
                        cout << b-i+1 << endl;
                        cout.flush();
                        cin >> temp2;

                        crr[i] = temp1;
                        crr[b-i+1] = temp2;
                        mp[{0, 1}] = {temp1, temp2};
                        mp[{1, 0}] = {1-temp1, 1-temp2}; 
                        quries += 2;
                        known01 = true;
                    }
                }
                else if(crr[i] == 1 and crr[b-i+1] == 0){
                    if(known01){
                        // cout << "case 4" << endl;
                        crr[i] = mp[{1,0}].first;
                        crr[b-i+1] = mp[{1,0}].second;
                    }
                    else{
                        // cout << "case 5" << endl;
                        int temp1, temp2;
                        cout << i << endl;
                        cout.flush();
                        cin >> temp1;
                        cout << b-i+1 << endl;
                        cout.flush();
                        cin >> temp2;

                        crr[i] = temp1;
                        crr[b-i+1] = temp2;
                        mp[{1, 0}] = {temp1, temp2};
                        mp[{0, 1}] = {1-temp1, 1-temp2}; 
                        quries += 2;
                        known01 = true;
                    }
                }
                else if(crr[i] == 1 and crr[b-i+1] == 1){
                    if(known00){
                        // cout << "case 6" << endl;
                        crr[i] = mp[{1,1}].first;
                        crr[b-i+1] = mp[{1,1}].second;
                    }
                    else{
                        // cout << "case 7" << endl;
                        int temp1, temp2;
                        cout << i << endl;
                        cin >> temp1;
                        cout << b-i+1 << endl;
                        cout.flush();
                        cin >> temp2;

                        crr[i] = temp1;
                        crr[b-i+1] = temp2;
                        mp[{1, 1}] = {temp1, temp2};
                        mp[{0, 0}] = {1-temp1, 1-temp2}; 
                        quries += 2;
                        known00 = true;
                    }
                }
            }
            if(known != b/2){
                while(1){
                    known++;
                    cout << known << endl;
                    cout.flush();
                    cin >> crr[known];
                    cout << b-known+1 << endl;
                    cout.flush();
                    cin >> crr[b-known+1];
                    quries+=2;
                    if(known == b/2){ done = true; break; }
                    if(quries%10 == 0){crr = crr; break;}
                }
            }
            if(quries == 150) break;
        }
        Loop(1, b+1, i) cout << crr[i]; cout << endl;
        cout.flush();
        char y;
        cin >> y;
        if(y == 'N') exit(0);
    
    }
}