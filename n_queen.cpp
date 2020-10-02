#include <iostream>
using namespace std;
int A[1000][1000]={0};
bool is(int x,int y,int n)
{
    for(int p=0;p<=x-1;p++)
    {
        if(A[p][y]==1)
        return false;
        if(x-1-p>=0&&y-1-p>=0&&A[x-1-p][y-1-p]==1)
        return false;
        if(x>0&&y+p<n-1&&A[x-1-p][y+1+p]==1)
            return false;
    }
return true;
   
}

int fill(int i,int n)
{  
int s;
    if(i==n)
{
for(int m=0;m<n;m++)
{
    for (int g=0;g<n;g++)
    {
       cout<<A[m][g]<<" ";
    }
    cout<<endl;
}
cout<<endl;
    return 1;
}
s=0;
    for(int j=0;j<n;j++)
{
   
if(is(i,j,n))
{
    for(int t=0;t<n;t++)
    A[i][t]=0;

    A[i][j]=1;
    int temp=fill(i+1,n);
    if(temp==0)
        A[i][j]=0;
   s=s+temp;
  
   
}


}


return s;
}

int main() {
    int n;
    cin>>n;
    cout<<fill(0,n);
    
}
