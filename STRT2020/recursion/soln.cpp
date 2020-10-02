/*                            /....!!!JAI SAI RAM !!!..../                         */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define P 1000000007
  ll dp[100000][100];
//Naya Question Banaya hey Bhai
// lets say only 3 steps 1 ,2 and 3.
// lets say maximum of 100 steps are possible.
// find number of ways to reach nth step using exactly k steps modulo 1000000007;
ll a,b,c;
ll k;
  ll exactly_k_steps(ll n,ll steps)
  {
      
     if(n==0&&steps==0)
     return 1;
      if(n<0)
     return 0;
      if(steps<0)
      return 0;
      if(dp[n][steps]!=-1)
      return dp[n][steps];
      dp[n][steps]= (exactly_k_steps(n-a,steps-1)%P+exactly_k_steps(n-b,steps-1)%P +exactly_k_steps (n-c,steps-1)%P)%P;
      return (dp[n][steps])%P;
  }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    cin>>a>>b>>c;
    cin>>k;
    cout<<exactly_k_steps(n,k)<<endl;
    return 0;
}
