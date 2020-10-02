#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
set<pair<ll,ll>> sett;

ll Distance[1000000];
void Dijkastra(vector<pair<ll,ll>>V[],ll s)
{
    sett.insert(make_pair(0,s));
    Distance[s]=0;
    while(!sett.empty())
    {
    ll top=(*(sett.begin())).second;
    sett.erase(sett.begin());
    for(auto i=V[top].begin();i!=V[top].end();i++)
    {
        if(Distance[(*i).second]>Distance[top]+(*i).first)
        {
            
            if(sett.find(make_pair(Distance[(*i).second],(*i).second))!=sett.end())
            sett.erase(sett.find(make_pair(Distance[(*i).second],(*i).second)));
            sett.insert(make_pair(Distance[top]+(*i).first,(*i).second));
            Distance[(*i).second]=Distance[top]+(*i).first;
        }
    }
    
    }
    
    
}



int main() {
    ll t,i,n,m,a,b,w,s;
    vector<pair<ll,ll>>V[1000000];
cin>>t;
while(t--)
{    
    for( i=0;i<10000;i++)
     {Distance[i]=100000000;
     }
    sett.clear();
    for (i=0;i<10000;i++) {
   V[i].clear();
}
     
    cin>>n>>m;
    for(i=0;i<m;i++)
   {
       cin>>a>>b>>w;
     V[a].push_back(make_pair(w,b));
     V[b].push_back(make_pair(w,a));
     
   }
   cin>>s;
   Dijkastra(V,s);
   
   for(i=1;i<=n;i++)
   {    if(i!=s&&Distance[i]!=100000000)
       cout<<Distance[i]<<" ";
       if(i!=s&&Distance[i]==100000000)
       cout<<-1<<" ";
   }
   cout<<endl;
}
	return 0;
}
