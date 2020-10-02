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
        k=rand()%6;
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
        k1=rand()%6;
        l1=rand()%2;
        val1=v[k1];
        m1=arr[l1];
        n1=pow(val1,m1);
        k2=rand()%6;
        l2=rand()%1;
        val2=v[k2];
        m2=arr[l2];
        n2=pow(val2,m2);
        n=n1*n2;
        cout<<n<<" ";
        a.push_back(n);
    }
       vector<ll> vp;
       for(i=0;i<a.size();i++)
       {
           ll x=sqrt(a[i]);
           if(x*x==a[i])
           {
               vp.push_back(i);
           }
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
            ll yy=rand()%3;
            if(k>l)
            swap(k,l);
            if(yy==1&&vp.size()!=0)
            {
                ll rr=rand()%(vp.size());
                cout<<vp[rr]<<" "<<vp[rr]<<endl;
            }
            else 
            {
                cout<<k<<" "<<l<<endl;
            }
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
             l=rand()%6;
             cout<<v[l]<<endl;
            }
        }
     }
    return 0;
}

