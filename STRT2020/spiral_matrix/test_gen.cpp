#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
  ll n,m;
  n=rand()%10;
  m=rand()%10;
   n+=1;
   m+=1;
cout<<n<<" "<<m<<endl;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
           ll k=rand()%100000000;
           cout<<k+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
