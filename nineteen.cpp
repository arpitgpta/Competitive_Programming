#include<bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;

int main(){
    string in;
    cin >> in;
    int arr[4] = {0};
    for(int i = 0; i < in.size(); i++){
        if(in[i] == 'n') arr[3]++;
        else if(in[i] == 'e') arr[2]++;
        else if(in[i] == 'i') arr[1]++;
        else if(in[i] == 't') arr[0]++;
    }
    // deb(arr[0]);
    // deb(arr[1]);
    // deb(arr[2]);
    // deb(arr[3]);
    int t1 = arr[0]<arr[1]?arr[0]:arr[1];
    int t2 = arr[2]<arr[3]?arr[2]:arr[3];
    
    // deb(t1);
    // deb(t2);

    while(1){
        if(t1*3 < t2){
            cout << t1;
            break;
        } 
        else t1--;
    }
    
    return 0;
}