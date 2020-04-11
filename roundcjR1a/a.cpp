#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
// #define int long long int
using namespace std;
#define pii pair <int, int>
#define mii map<int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define Loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define loop(n) for(int i = 0; i < n; i++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)
#define vec vector
#define mk_arr(n, t, s) t* n = new t[s]; loop(s) cin >> n[i]; 
#define mi_arr(n, s) int* n = new int[s]; loop(s) cin >> n[i]; 
#define arr_out(n, s) Loop(0, s, lout) cout << n[lout] << " ";
#define pi(x) printf("%lld ", x);
typedef long long int ll;
ll siz=300001;
ll MAX=10000000000000;
ll P=1000000007;
int32_t main()
{
    fastio;
    ll t,i,j,k,len,m,n,o,p,q,r,s,tt=0;
    string a[3000],pref[3000],su[3000],stempqr[3000];
 
    w(t){
        tt++;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            len=a[i].length();
            //cout<<l<<endl;
            for(j=0;j<len;j++)
            {
                if(a[i][j]=='*')
                {
                   //cout<<"aaya \n";
                   break;
                }
            }
            for(k=len-1;k>=0;k--)
            {
                if(a[i][k]=='*')
                {
                   // cout<<"gaya\n";
                    break;
                }
                
            }
            
                pref[i]=a[i].substr(0,j);
                if(len-1-k>0)
                {
                   su[i]=a[i].substr(k+1,len-1-k);
                }
                else 
                su[i]="";
                if(k-j-1>0)
                stempqr[i]=a[i].substr(j+1,k-j-1);
                else 
                stempqr[i]="";
                //cout<<prefix[i]<<" p "<<suffix[i]<<" s "<<stem[i];
        }
        string pre="",suf="";
        ll inde=-1,lep=-1,les=-1,idx=-1;
        for(i=0;i<n;i++)
        {
            //cout<<prefix[i].length()<<" "<<suffix[i].length()<<endl;
           if((ll)pref[i].length()>lep)
           {
               lep=pref[i].length();
               pre=pref[i];
           }
           if((ll)su[i].length()>les)
           {
               suf=su[i];
               les=su[i].length();
           }
        }

        //pre=prefix[inde];
        //suf=suffix[indes];
        //cout<<pre <<" an "<<suf<<endl;
        ll flagabc=0;
        for(i=0;i<n;i++)
        {
            ll fg=0;
            for(j=0;j<pref[i].length();j++)
            {
                if(pref[i][j]!=pre[j])
                {
                    fg=1;
                    break;
                }
            }
            if(fg)
            {
                flagabc=1;
                break;
            }
               ll offset=suf.length()-su[i].length();
            for(j=0;j<su[i].length();j++)
            {
                if(su[i][j]!=suf[j+offset])
                {
                    fg=1;
                    break;
                }
            }
            if(fg)
            {
                flagabc=1;
                break;
            }
        }
            if(flagabc)
            {
                cout<<"Case #"<<tt<<": *\n";
                continue;
            }
            string answer="";
            answer+=pre;
            for(i=0;i<n;i++)
            {
                answer+=stempqr[i];
            }
            answer+=suf;
            for(j=0;j<answer.length();j++)
            {
                if(answer[j]=='*')
                answer[j]='A';
            }
            cout<<"Case #"<<tt<<": "<<answer<<"\n";
    }
    return 0;
}