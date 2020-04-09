// g++ NewYearGarland.cpp -o NewYearGarland && ./NewYearGarland

/*

*/

#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl

// int max(long long a, long long b){
//     return a > b ? a : b;
// }

int main(){


    int t;
    cin >> t;
    while(t--){
        
        vector<long long> arr(3);
        for(int i = 0; i < 3; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        if(arr[2] <= arr[1]+arr[0]+1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}