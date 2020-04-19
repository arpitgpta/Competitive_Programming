#include <bits/stdc++.h>
// #define fastio ios_base::sync_with_stdio(false); cin.tie(NUint); cout.tie(NUint)
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
#define modd 1000000000

int32_t main()
{
    int t,i,j,c,n,T,temp,d,mini,p,q;
string str;
cin>>t;
T=t;
while (t--)
{p=q=0;
    mini=1000000000001;
    cout<<"Case "<<"#"<<T-t<<": " ;
    cin>>str;
    int l=str.length();
    stack<int> s;
    s.push(1);
    s.push(1);
    s.push(1);
    for(i=0;i<l;i++)
    {
int m=s.top();
if(str[i]==')')
{s.pop();
}
    else if(str[i]=='N')
     p=(p-(1*m)+ modd)%modd;
     else if(str[i]=='S')
     p=(p+(1*m))%modd;
     else if(str[i]=='W')
     q=(q-(1*m)+modd)%modd;
     else if(str[i]=='E')
     q=(q+(1*m))%modd;
     else if (str[i]=='(')
     {
       s.push((1)%modd);  
     }
     else
     {
         s.push((m*(str[i]-48))%modd);
       
         m=s.top();
           i++;
     }

//cout<<p<<":"<<q<<"  "<<m<<endl;

    }
cout<<1+(q)%modd<<" "<<1+(p)%modd<<endl;
}



}