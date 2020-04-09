// g++ motarack_bday.cpp -o motarack_bday && ./motarack_bday

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
#define vin vector<int>
#define vll vector<long long>

int main(){

    fastio;    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vin arr(n);
        loop(n)  cin >> arr[i];
        int max_affecting = INT_MIN;
        int min_affecting = INT_MAX;
        if(arr[0] >= 0 && arr[1] == -1) max_affecting = min_affecting = arr[0];
        // deb(max_affecting);
        // deb(min_affecting);
        if(arr[n-1] >= 0 && arr[n-2] == -1){
            if(arr[n-1] < min_affecting) min_affecting = arr[n-1];
            if(arr[n-1] > max_affecting) max_affecting = arr[n-1];
        }
        // deb(max_affecting);
        // deb(min_affecting);
        for(int i = 1; i < n-1; i++){
            if(arr[i] >= 0 and (arr[i-1] < 0 or arr[i+1] < 0)){
                // cout << arr[i] << " found" << endl;
                if(arr[i] < min_affecting) min_affecting = arr[i];
                if(arr[i] > max_affecting) max_affecting = arr[i];
                // deb(max_affecting);
                // deb(min_affecting);                
            }    
        }
        // cout << endl;
        // deb(max_affecting);
        // deb(min_affecting);
        int k = ceil((float)(max_affecting+min_affecting)/2);
        loop(n) if(arr[i] < 0) arr[i] = k;
        int m = INT_MIN;
        for(int i = 1; i < n; i++) if(abs(arr[i]-arr[i-1]) > m) m = abs(arr[i]-arr[i-1]); 
        cout << m << " " << k << endl;
    }
}