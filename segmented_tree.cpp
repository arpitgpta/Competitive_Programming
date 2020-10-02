#include <bits/stdc++.h>
using namespace std;
int rang(int l,int u,int A[],int *X,int x,int y,int index)
{
   int  mid=(x+y)/2;
   if(l<=x&&u>=y)
   return  X[index];
   if(y<l||x>u)
   return INT_MAX;
   else
   return min(rang(l,u,A,X,x,mid,(2*index)),rang(l,u,A,X,mid+1,y,(2*index)+1));
}
void update(int x,int y,int *X,int i,int inc,int index)
{
    if(x>i||y<i)
    return;
    if(x==y)
{    X[index]=X[index]+inc;
    return;
}
    int mid=(x+y)/2;
    update(x,mid,X,i,inc,index*2);
    update(mid+1,y,X,i,inc,index*2+1);
   X[index] =min(X[2*index],X[2*index+1]);
    
}

void build(int A[],int l,int u,int *X,int index)
{
if(l==u)
{X[index]=A[l];
    return;
}
int mid=(l+u)/2;
build(A,l,mid,X,2*index);
build(A,mid+1,u,X,2*index+1);
X[index]=min(X[2*index],X[2*index+1]);
}
int main() {
    int A[1000000];
  cin>>n>>q;
  for(i=0;i<n;i++)
  cin>>A[i];

    int *X=new int[4*n+1];
build(A,0,n-1,X,1);

   for(int i=0;i<q;i++)
   {cin>>x>>a>>b;
if(x==1)
  cout<<rang(a,b,A,X,0,5,1);
  else
  update(0,5,X,a,b,1);
   }
}
