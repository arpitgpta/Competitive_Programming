/* ********************************* JAI SAI RAM ************************************* */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ans[200001],vis[200001];
vector<ll> adj[200001];
ll MAX=1000000000;
void solve()
{
    //graph may or may not be connected and undirected
  ll i,j,k,l,m,n,o,p,q,r,t,left,right;
  cin>>n;
  memset(vis,0,sizeof(ll)*(n+1));
  queue<ll> pq;
  for(i=1;i<=n;i++)
  {
  adj[i].clear();
      ans[i]=MAX;
      //cout<<ans[i]<<"ha ";
      cin>>j;
      if(j==1)
      {pq.push(i);vis[i]=1;ans[i]=0;} 
      //cout<<ans[i]<<" ";

  }
  cin>>m;
  for(i=0;i<m;i++)
  {
    cin>>j>>k;
    adj[j].push_back(k);
    adj[k].push_back(j);
  }
  while(!pq.empty())
  {
       ll u=pq.front();
       pq.pop();
       for(auto v:adj[u])
       {
           if(!vis[v])
           {
               //cout<<u<<" "<<v<<endl;
               vis[v]=1;
               pq.push(v);
               ans[v]=min(ans[v],ans[u]+1);
           }
       }
  }
  for(i=1;i<=n;i++)
  {
      cout<<ans[i]<<" ";
  }
  cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

