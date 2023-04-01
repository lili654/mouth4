#include <iostream>
#include <math.h>
using namespace std;
int n,x;   //n为河宽，x为上学次数 
const int N=1e5+10;
int a[N],b[N];
bool check(int m)  
{
   for(int i=1;i+m-1<n;i++)
   {
       if(b[i+m-1]-b[i-1]<2*x)
       {
           return false;
       }
       
   }
   return true;
}
int main()
{
    cin>>n>>x;
    for(int i=1;i<n;i++)
    {
       cin>>a[i];   //第i 处位置石头的高度
    }
    a[0]=a[n]=1e5+10;  //0和n处为岸边
    for(int i=1;i<=n;i++)
    {
        b[i]=b[i-1]+a[i];  //求前缀和：所有石头高度总和
    }
    int l=1,r=1e5+10;  //l为跳跃高度，r为河宽
    while(l<r)   //二分法求最优值
    {
        int mid=l+r>>1;
        if(check(mid))
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<l<<endl;
    
    return 0;
}
