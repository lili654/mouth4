#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 10010,inf=0x3f3f3f3f;
int n;
int a[N],f[N];
bool is_prime(int x)//质数的判断
{
    for (int i = 2; i < x / i; i++  )
        if (x % i == 0)
            return false;
    return true;
}

int d_prime(int x)//遍历所有因子数
{
    for (int i = 2; i <= x; i++  )
        if (x % i == 0 && is_prime(i))//为x的因子同时为质数，由每次于从2开始便得到最小因子
            return i;
    return 1;
}
int main() {
     cin>>n;
     for(int i=1;i<=n;i++) cin>>a[i];
     memset(f,-inf,sizeof(f));//初始化
     f[1]=a[1];
     for(int i=1;i<=n;i++){
       int j=d_prime(n-i);//从当前位置所能跳到的最远位置i——i+1到i+d_prime(n-i)
       for(int k=i+1;k<=i+j;k++){  //遍历所有的可能跳到的位置
        if(f[k] == -inf) f[k] = a[k] + f[i];//如果之前为经过，便直接f[i]+a[k];
        else f[k]=max(f[k],f[i]+a[k]);
        }
     }
     cout<<f[n];
    return 0;
}
