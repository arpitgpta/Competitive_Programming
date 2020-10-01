#include<iostream>
#include<vector>
using namespace std;
typedef long long int ll;
vector<ll> V[100001];
vector<ll> Euler;
ll Index[100001];
ll Value[100001];bool visited[100001];
ll D[100001];
ll S[1000001];
long long int query(long long int l,long long int r,long long int i,long long int j,long long int index)
{
if(j<=r&&i>=l)
return S[index];
if(l>j||r<i)
return INT_MAX;
int mid=(i+j)/2;
return min(query(l,r,i,mid,(2*index)+1) ,query(l,r,mid+1,j,(2*index)+2));

}

void build(vector<ll> A,long long int l,long long int h,long long int index)
{
long long int mid=(l+h)/2;
if(l==h)
{S[index]=A[l];
return;
}
build(A,l,mid,(index*2)+1);
build(A,mid+1,h,(index*2)+2);
long long int temp=min(S[(index*2)+1] , S[(index*2)+2]);
S[index]=temp;

}
ll LCA(ll a,ll b)
{
ll x=Index[a];
ll y=Index[b];

return query(min(x,y),max(y,x),0,Euler.size()-1,0); 

}
void DFS(ll source)
{
    static ll temp=0;
    static ll k=0;
    temp++;
    ll p=temp;
    Value[temp]=source;
    Index[source]=k;
visited[source]=true;
Euler.push_back(temp);
k++;
vector<ll> ::iterator i;
for(i=V[source].begin();i!=V[source].end();i++)
{
if(!visited[*i])
{
    D[*i]=D[source]+1;
    DFS(*i);
    Euler.push_back(p);
    k++;
}
}



}
int main()
{

ll n,i,a,b,q,da,db,p,t;
cin>>t;
while(t--)
{
  cin>>n>>p>>q>>da>>db;
  for(i=1;i<=n;i++)
   { V[i].clear();
    visited[i]=false;}

    for(i=0;i<n-1;i++)
{
    cin>>a>>b;
    V[a].push_back(b);
    V[b].push_back(a);
}
D[1]=0;
DFS(1);
build(Euler,0,Euler.size()-1,0);
ll m=LCA(p,q);
ll dis=D[p]+D[q]-D[m];
//cout<<m<<":"<<dis<<D[p]<<":"<<D[q];
if(dis%da==0)
cout<<"Alice"<<endl;
else
cout<<"Bob"<<endl;

}
}
