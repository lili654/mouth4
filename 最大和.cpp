/*
小蓝在玩一个寻宝游戏, 游戏在一条笔直的道路上进行, 道路被分成了 n个方格, 依次编号 1 至 n,
每个方格上都有一个宝物, 宝物的分值是一个整数 (包括正数、负数和零), 当进入一个方格时即获得方格中宝物的分值。
小蓝可 以获得的总分值是他从方格中获得的分值之和。
小蓝开始时站在方格 1 上并获得了方格 1 上宝物的分值, 他要经过若干步 到达方格 n。
当小蓝站在方格p 上时, 他可以选择跳到 p+1 到 p+D(n−p) 这些方格 中的一个,
其中 D(1)=1,D(x)(x>1) 定义为 x 的最小质因数。
给定每个方格中宝物的分值, 请问小蓝能获得的最大总分值是多少。
*/
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
    /*
    void *memset(void *s,int c,unsigned long n);
    函数功能：为指针变量s所指的前n个字节的内存单元填充给定的int型数值c，它可以为任何数据进行初始化。
    换句话说，就是将数值c以单个字节逐个拷贝的方式放到指针变量s所指的内存中去。 注意：只将数值c的最低一个字节填充到内存。
    示例：当c=-1时:
    #include <string.h> /////注意要带上这个头文件
    int dp[3];
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<3;i++)
        cout << dp[i] << " ";
    */
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
