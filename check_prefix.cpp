/*
    this function can be used anywhere to check if a pattern is prefix of given text 

*/

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define mii map<int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define Loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define loop(n) for(int i = 0; i < n; i++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)
#define vec vector
#define mk_arr(n, t, s) t* n = new t[s]; loop(s) cin >> n[i]; 
#define mi_arr(n, s) int* n = new int[s]; loop(s) cin >> n[i]; 
#define arr_out(n, s) Loop(0, s, lout) cout << n[lout] << " ";
#define pi(x) printf("%lld ", x);

bool isPrefix(string pattern, string text){
    int pt_len = pattern.length();
    text = pattern+"$"+text;
    int len = text.length();
    vin arr(len, 0);
    int i = 1;
    int r = 0;
    int j;
    bool flag = true;
    while(i < len){
        if(flag) r = 0, j = i;
        else flag = true;
        while(text[j] == text[r]) j++, r++;
        arr[i++] = r;
        for(int p = 1; p < r; p++){
            if(p+arr[p] >= r){
                r = p;
                j = i+p;
                flag = false;
                if(j > len) j = i, r = 0;
            }
            else arr[i++] = arr[p]; 
        }
    }
    if(arr[pt_len+1] == pt_len) return true;
    else return false;
}

int32_t main(){
    string pattern, text;
    cin >>  text;
    cin >> pattern;
    if(isPrefix(pattern, text)) cout << "Yes" << endl;
    else cout << "No" << endl;
}