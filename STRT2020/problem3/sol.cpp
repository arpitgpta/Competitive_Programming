#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[2001];
ll LIS(ll b[],ll n)
{
  multiset<ll> se;
  map<ll,ll> mp;
  se.insert(-1);
  mp[-1]=0;
  se.insert(10000000);
  ll ans=0;
  for(ll i=1;i<=n;i++)
  {
      //cout<<b[i]<<" ";
   auto it= se.lower_bound(b[i]);
    if(*it>b[i])
    {
      it--;
    }
   // cout<<(*it)<<" ya "<<mp[*it]<<endl;
    mp[b[i]]=mp[*it]+1;
    ans=max(ans,mp[b[i]]);
    se.insert(b[i]);
  }
 // cout<<ans<<endl;
  return ans;
}
void solve()
{
    ll i,j,k,l,m,n,q,s;
    cin>>n>>k;
    ll c[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    for(i=1;i<=n-k+1;i++)
    {
        l=1;
        for(j=1;j<i;j++)
        {
             c[l++]=a[j];
        }
        for(j=i+k-1;j>=i;j--)
        {
            c[l++]=a[j];
        }
        for(j=i+k;j<=n;j++)
        {
            c[l++]=a[j];
        }
        
        ans=max(ans,LIS(c,n));
       // cout<<endl;
    }
    cout<<ans<<endl;
}
int main()
{
    ll i,j,k,l,m,n,o,p,q,r,t,x;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

