// g++ VersaForSanta.cpp -o VersaForSanta && ./VersaForSanta

/*

*/

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl

int main(){

    int t;
    cin >> t;
    while(t--){

        ull s, n;
        cin >> n >> s;
        vector<ull> arr(n+1);
        
        for(int i = 1; i <= n; i++) cin >> arr[i];
        int CM = 0;
        int CI = 0;
        int i;
        for(i = 0; i < n; i++){
            
            if(arr[i] > CM){
                if(CM > s) break;
                // cout << "came in if" << endl;
                s -= CM;
                CM = arr[i];
                CI = i;
                // deb2(CI, CM);
                // deb(s);
            }
            else{
                // cout << "came in else" << endl;
                if(arr[i] > s) break;
                s -= arr[i];
            }
        }
        // deb(i);
        if(arr[i] == CM) CI = 0;
        else if(CM <= s) CI = 0;
        cout << CI << endl;
    }
}