#include <iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;
typedef long long int ll;
vector<pair< pair<ll,ll>,ll> > V;
bool compare(pair< pair<ll,ll>,ll> p1, pair< pair<ll,ll>,ll> p2)
{
    return (p1.first.second<p2.first.second);
}
int main()
{
    ll t,n,m,k,i,A[200002]={0},Maping[200002]={0},Frequency[200002]={0},j,ans,x,y,q,z,Ans[200002]={0};
cin>>n;
for(i=0;i<n;i++)
{
    cin>>A[i];

}

 cin>>q;
  for(i=0;i<q;i++)
  {
      cin>>x>>y;
      V.push_back(make_pair(make_pair(x,y),i));
  } 
  sort(V.begin(),V.end());
ll blocksize=sqrt(n);
k=blocksize;
ll prev=0;
for(i=0;i<q;i++)
{
    
     if(V[i].first.first>k)
    {
        sort(V.begin()+prev,V.begin()+i,compare);
    k=k+blocksize;
    prev=i;
    }
}
sort(V.begin()+prev,V.begin()+i,compare);

ll i1=0;
ll i2=0;

ll temp=0;
ll no=0;
Frequency[A[0]]++;
no=1;

for(i=0;i<q;i++)
{

    x=V[i].first.first-1;
    y=V[i].first.second-1;
    z=V[i].second;
   
    if(i1-x>0)
    {
        
        for(j=i1-1;j>=x;j--)
        {
               if(Frequency[A[j]]==0)
               {no++;
               }
           Frequency[A[j]]++;
        }
    }
    else
    {

        for(j=i1;j<x;j++)
        {
            
             if(Frequency[A[j]]==1)
               {no--;
               }
                 Frequency[A[j]]--;
        }
        
    }

    if(i2-y>0)
    {
        
        for(j=i2;j>y;j--)
        {
          if(Frequency[A[j]]==1)
               {no--;
               }
                 Frequency[A[j]]--;   
           
        }
    }
    else
    {

        for(j=i2+1;j<=y;j++)
        {
             if(Frequency[A[j]]==0)
               {no++;
               }
           Frequency[A[j]]++;
        }
    }


i1=x;
i2=y;



   Ans[z]=no;



}
for(i=0;i<q;i++)
cout<<Ans[i]<<endl;


}
