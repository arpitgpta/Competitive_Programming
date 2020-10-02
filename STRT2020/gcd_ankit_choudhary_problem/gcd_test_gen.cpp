                        /*....!!!JAI_SAI_RAM!!!....*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n=1000000000,i,j,k,l,m;
    //cout<<1000<<endl;
      ll a[]={10,100,340,20,1000,20000,87,37,43,576};
      ll b[]={7,90,378,538,674,896,17000,6500,458,560};
      ll c[]={2000,300,67903,504,678,900,230,4900,60000,6789};
      cout<<"1000\n";
      for(i=0;i<10;i++)
      {
          for(j=0;j<10;j++)
          {
            for(k=0;k<10;k++)
            {
                cout<<n<<endl;
                n--;
                cout<<a[i]<<" "<<b[j]<<" "<<c[k]<<"\n";
            }
          }
      }
    return 0;
}

