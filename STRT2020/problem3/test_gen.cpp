#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
void solve()
{
    ll i,j,k,l,m,n,q,s,t;
    srand(0);
    t=rand()%5+1;
    cout<<t<<endl;
    for(i=1;i<=t;i++)
    {
        n=1000;
        k=n-(rand()%n);
        cout<<n<<" "<<k<<endl;
        for(j=1;j<=n;j++)
        {
            cout<<(rand()%(100000))+1<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    ll i,j,k,l,m,n,o,p,q,r,t,x;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

