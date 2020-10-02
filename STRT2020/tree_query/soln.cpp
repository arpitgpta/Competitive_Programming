/*                               ....!!!JAI SAI RAM!!!....                        */
/*      Writing Segment tree god support me*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll prime[1000001];
void seive()
{
   ll i,j,k,l,m,n,o,p;
   for(i=1;i<=1000000;i++)
   prime[i]=1;
   for(i=1;i<=1000000;i++)
   {
       if(prime[i]==1)
       {
           for(j=2*i;j<=1000000;j+=i)
           {
               if(prime[j]==1)
               prime[j]=i;
           }
           prime[i]=i;
       }
   }
   prime[0]=prime[1]=0;
}
vector<ll> prime_factors(ll n)
{
   vector<ll> v(101,0); 
   while(n!=1)
   {
      ll k=prime[n];
      ll s=0;
      while(n%k==0)
      {
          n=n/k;
          s++;
      }
      v[k]+=s;
   }
   return v;
}
vector<ll> segtree[900000];
vector<ll> temp(101,0);
 vector<ll> build(ll idx,ll start,ll end,ll a[])
 {
    
     if(start>end)
    return temp;
    if(start==end)
    {
        segtree[idx]=prime_factors(a[start]);
        return segtree[idx];
    }
    vector<ll> x(101,0);
    vector<ll> y(101,0);
    vector<ll> z(101,0);
    ll mid=(start+end)/2;
    x=build(2*idx+1,start,mid,a);
    y=build(2*idx+2,mid+1,end,a);
    for(ll i=0;i<=100;i++)
    {
        z[i]=x[i]+y[i];
    }
    //now calling on two separate nodes.
    segtree[idx]=z;
   return segtree[idx] ;
 }

 vector<ll> query(ll idx,ll start,ll end,ll l,ll r)
 {
     //no overlap then return temporary vector.
     if(r<start||l>end)
     return temp;
     //complete overlap.
     if(start>=l&&end<=r)
     {
         return segtree[idx];
     }
     //partial overlap then call both the childs.
     vector<ll> x(101,0);
     vector<ll> y(101,0);
     vector<ll> z(101,0);
     ll mid=(start+end)/2;
     x=query(2*idx+1,start,mid,l,r);
     y=query(2*idx+2,mid+1,end,l,r);
     for(ll i=0;i<=100;i++)
    {
        z[i]=x[i]+y[i];
    }
    return z;
 }
   
  vector<ll> update(ll idx,ll start,ll end,ll index,vector<ll> val)
  {
      if(start>end||start>index||end<index)
      {
          return temp;
      }
      if(index>=start&&index<=end)
      {
           for(ll i=0;i<=100;i++)
           {
               segtree[idx][i]+=val[i];
           }
      }
      if(start<end)
      {
          ll mid=(start+end)/2;
          update(2*idx+1,start,mid,index,val);
          update(2*idx+2,mid+1,end,index,val);
      }
      return segtree[idx];
  }

  // Hence now update , query and build all three parts are over.


int main()
{
    seive();
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,start,end,a[100000],i,j,k,l,m,o,p,q,r,s,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll> init=build(1,0,n-1,a);
    /*for(i=1;i<=10;i++)
    {
        cout<<init[i]<<" ";
    }*/
    // Use of segment tree with number theory and maths
    //cool problem .
    cin>>q;
           while(q--)
           {
            cin>>o;
           // o for type of query. 1 for normal query over a range and 2 for updating an index i  in the original array that is multiply the given index with value val;
            if(o==1)
            {
             cin>>l>>r;
             vector<ll> ans=query(1,0,n-1,l-1,r-1);
             ll flag=1;
             for(i=0;i<=100;i++)
            {
            if(ans[i]%2==1)
            {
                flag=0;
                break;
            }
            }
            //cout<<endl;
            if(flag)
            {
            cout<<"YES\n";
            }
            else 
            {
            cout<<"NO\n";
            }
            }
            else 
            {
                ll index,val;
                cin>>index>>val;
                vector<ll> xx=prime_factors(val);
                update(1,0,n-1,index-1,xx);
               /* for(i=1;i<=10;i++)
                  {
                  // cout<<segtree[1][i]<<" ";
                 }*/
            }
        }
    return 0;
}
