#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
     vector<ll> v={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    ll arr[7]={1,2,3,4,5,6,7};
    cout<<20000<<endl;
    ll i,j,k,l,value,val,m,n;
    vector<ll> a;
    a.push_back(0);
    for( i=1;i<=10000;i++)
    {
        k=rand()%25;
        l=rand()%3;
        val=v[k];
        m=arr[l];
        n=pow(val,m);
        cout<<n<<" ";
        a.push_back(n);
    }
    for(;i<=20000;i++)
    {
        ll k1,k2,k3,l1,l2,l3,val1,val2,val3,m1,m2,m3,n1,n2,n3;
        k1=rand()%25;
        l1=rand()%1;
        val1=v[k1];
        m1=arr[l1];
        n1=pow(val1,m1);

        k2=rand()%25;
        l2=rand()%1;
        val2=v[k2];
        m2=arr[l2];
        n2=pow(val2,m2);

        k3=rand()%25;
        l3=rand()%1;
        val3=v[k3];
        m3=arr[l3];
        n3=pow(val3,m3);
        n=n1*n2*n3;
        cout<<n<<" ";
        a.push_back(n);
    }

    // now generating queries test cases.
     cout<<endl;
     cout<<20000<<endl;
     for(i=1;i<=20000;i++)
     {
        if(i%2==0)
        {
            //query for type 1;
            // 1 based indexing.
            cout<<1<<" ";
            k=rand()%20000;
            l=rand()%20000;
            k++;
            l++;
            if(k>l)
            swap(k,l);
            cout<<k<<" "<<l<<endl;
        }
        else 
        {
            cout<<2<<" "<<i<<" ";
            ll xx=rand()%2;
            if(xx==1)
            {
              cout<<a[i]<<endl;
            }
            else 
            {
             l=rand()%25;
             cout<<v[l]<<endl;
            }
        }
     }
    return 0;
}
