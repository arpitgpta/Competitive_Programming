#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define int long long int
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
#define mod 1000000000
vector<char> ans;

bool get(int x,int y)
{
    if(x==0&&y==0) return true;
    else if((x+y)%2!=0) return true;
    else if(true) return false;
}
int32_t main()
{
    int t,i,j,c,n,d,p,q,m,x1,x2,y1,y2,flag;bool flag1, flag2;
    double A[301][301];

    int pos1,pos2;
    w(t){   
        ans.clear();
        flag1=flag2=false;
        flag=0;
        cout<<"Case "<<"#"<< t <<": " ;
        cin>>pos1>>pos2;
        if(pos1<0) flag1=true,pos1=-1*pos1;
        if(pos2<0) flag2=true,pos2=pos2*-1;;
        if(pos1==0&&pos2==0)
        {
            cout<<endl;
            continue;
        }
        while(pos1!=0||pos2!=0){
            if((pos1+pos2)%2==0)
            flag=1;
            else
            {
                if(pos1%2!=0)
                {         
                    if(get((pos1-1)/2,pos2/2))
                    {
                        pos1=pos1-1;
                        ans.push_back('E');
                    }
                    else if(get((pos1+1)/2,pos2/2))
                    {
                        pos1=pos1+1;
                        ans.push_back('W');
                    }
                }
                else 
                {
                    
                    if(get((pos1)/2,(pos2-1)/2))
                    {
                        pos2=pos2-1;
                        ans.push_back('N');
                        
                    }            
                    else if(get((pos1)/2,(pos2+1)/2)){
                        pos2=pos2+1;
                        ans.push_back('S');
                    }
                }
            }
            pos1=pos1/2;
            pos2=pos2/2;
        } 
        if(flag==0)
        {
            for(i=0;i<ans.size();i++)
            if(flag1&&ans[i]=='E')
            cout<<'W';
            else if(flag1&&ans[i]=='W')
            cout<<'E';
            else if(flag2&&ans[i]=='N')
            cout<<'S';
            else if(flag2&&ans[i]=='S')
            cout<<'N';
            else
            cout<<ans[i];
        }
        else
        {
            string str = "IMPOSSIBLE";
            cout<< str;
        }
        cout<<endl;
    }
}