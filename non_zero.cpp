// g++ non_zero.cpp -o non_zero && ./non_zero

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

int main(){

   fastio;    
   int t, n, temp, zeros, sum;
   cin >> t;
   while(t--){
       cin >> n;
       zeros = 0;
       sum = 0;
       loop(n){
           cin >> temp;
           if(!temp) zeros++;
           sum += temp;
       }
       if(sum <= 0){
           if(abs(sum) == zeros) zeros++;
       }
       
       cout << zeros << endl;
   }

}