// g++ ques2.cpp -o ques2 && ./ ques2
#include<bits/stdc++.h>
using namespace std;
#define int long long

bool isCube(int a){
    int root_a = sqrt(a);
    for(int i = 2; i <= root_a; i++){
        int freq = 0;
        while(!(a%i)) freq++, a/=i;
        if(freq%3) return false;
    }
    if(a != 1) return false;
    return true;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        int ans = 0;
        int start = 0;
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(!isCube(arr[i])){
                if(flag){
                    int temp = i - start;
                    ans = temp > ans ? temp : ans;
                }
                flag = false;
            }
            else if(!flag) start = i, flag = true;
        }
        cout << ans << endl;
    }
}
