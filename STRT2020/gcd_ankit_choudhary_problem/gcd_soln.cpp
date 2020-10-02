/*....!!!JAI_SAI_RAM!!!....*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll lcm(ll a,ll b)
{
    ll c=(a*b);
 ll d=__gcd(a,b);
 ll e=c/d;
 return e;
}
int main()
{
    ll i,j,a,b,c,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        j=(n*24);//to convert days in hours. 
        cin>>a>>b>>c;//first and second and third year guys.
        i=lcm(a,b);
        i=lcm(i,c);//calculating lcm of all the three numbers 
        i=j/i;// number of overlaps in n*24 hours.
        cout<<i<<endl;
    }
    return 0;
}
