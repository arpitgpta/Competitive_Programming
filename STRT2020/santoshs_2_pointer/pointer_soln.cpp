/*....!!!JAI_SAI_RAM!!!....*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    //basics of kadanes algorithm.
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll i,j,k,l,m,n,o,p,q,r,s,t,a[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
           cin>>a[i];
        }
        m=p=0;
        for(i=0;i<n;i++)
        {
            
            s=cbrt(a[i]);
            if(s*s*s==a[i])
            {
                m++;
            }
            else 
            {
                m=0;
            }
            p=max(p,m);
        }
        cout<<p<<endl;
    }
    return 0;
}
