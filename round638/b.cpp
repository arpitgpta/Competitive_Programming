#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(105);
        vector<int> ct(105, 0);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            ct[arr[i]]++;
        }
        int nd = 0;
        vector<int> a2;
        for(int i = 1; i <= n; i++){
            if(ct[i]) {
                nd++;
                a2.push_back(i);
            }
        }
        if(k < nd) cout << "-1\n";
        else{
            int temp = k - nd;
            for(int i = 0; i < temp; i++){
                for(int j = 1; j < 101; j++){
                    if(ct[j] == 0){
                        a2.push_back(j);
                        ct[j]= 5;
                    }
                }
            }
            cout << n*k << endl;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < k; j++) cout << a2[j] << " ";
            }
            cout << endl;
        }
    }
}