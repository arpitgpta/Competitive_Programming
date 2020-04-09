// g++ AandB.cpp -o AandB && ./AandB
#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " " << x << endl;

vector<int> arr(1e5, 0);

int lb(int num){
    int low = 0, high = 1e5, mid;
    while(low <= high){
        mid = (low+high)/2;
        if(num >= arr[mid] && num < arr[mid+1]){ 
            // deb((num >= arr[mid] && num < arr[mid+1]));
            // deb((num >= arr[mid]));
            // deb((num < arr[mid+1]));
            // deb(arr[mid]);
            int ans ;
            if(num == arr[mid]) {
                ans = mid;
            }
            else {
                ans = mid+1;
            }
            while(1){
                if((arr[ans]+num)%2 == 0) {
                    // deb(arr[ans]);
                    // deb(num);
                    return ans;
                }
                else ans++;
            }
        }
        else if(num > arr[mid]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}

int main(){

    for(int i = 1; i < 1e5; i++)    arr[i] = (i + arr[i-1]);
    int t;
    cin >> t;
    while(t--){
        int a;
        int b;
        cin >> a >> b;
        int temp = abs(a-b);
        //int tans = lb(temp);
        
        cout << lb(temp) << endl;
    }
}