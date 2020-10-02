#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll i,j,k,l,m,n,o,p,q,r,t,x;
    vector<string> v;
    vector<ll> v2={20000,100000};
    srand(time(0));
    t=2;
    cout<<2<<endl;
    string s="abcdefghijklmnopqrstuvwxyz";
    for(i=0;i<2000;i++)
    {
        j=rand()%26;
        k=26-j;
        l=rand()%k;
        l++;
        v.push_back(s.substr(j,l));
    }
    p=0;
    q=2e5;
    for(i=0;i<t;i++)
    {
        k=v2[i];
        string a="",b="";
        for(j=0;j<k;j++)
        {
            l=rand()%26;
            a+=s[l];
        }
        p+=k;
        cout<<a<<endl;
        cout<<v[rand()%2000]<<endl;
    }

}

