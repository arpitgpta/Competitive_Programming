#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
     ll t,i,j,k,l,m,n,o,p,q,r,s;
     cin>>t;
     while(t--)
     {
         cin>>n;
         k=n;
         s=0;
         o=0;
         while(k!=0)
         {
             if(k%2==1)
             {
               o+=s;
             }
             s++;
             k/=2;
         }
         cout<<o<<endl;
     }
    return 0;
}
