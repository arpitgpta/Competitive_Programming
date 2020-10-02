                        /*....!!!JAI_SAI_RAM!!!....*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   cout<<10<<endl;
   ll t,i,j,k,l,m,n,o,p,q,r,s;
   for(i=0;i<10;i++)
   {
       n=rand()%100000;
       cout<<n<<"\n";
       for(j=0;j<n;j++)
       {
           p=rand()%1000000000;
           l=rand()%2;
           if(l==0)
           {
           cout<<p<<" ";
           }
           else 
           {
               p=rand()%1000;
               o=p*p*p;
               cout<<fixed<<o<<" ";
           }
       }
       cout<<endl;
   }
    return 0;
}

