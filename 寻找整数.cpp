#include<bits/stdc++.h>
using namespace std;
const int N=50;//注意和define的区别
int mod[50]={0,0,1,2,1,4,5,4,1,2,9,0,5,10,11,14,9,0,11,18,9,11,11,15,17,9,23,20,25,16,29,27,25,11,17,4,29,22,37,23,9,1,11,11,33,29,15,5,41,46};
int main()
{    
    long long ans=3;//初始符合条件的数 
    long long k =2;//初始步长为2 
    for(long long i=3;i<N;i++)
    {//步长3-49 枚举 
        while(1){
        if(ans%i==mod[i]) //ans为满足当前模计算的数 
        {
            k=k/__gcd(k,i)*i;//计算最小公倍数 K为之前的步长， i是现在的步长 计算之后更新 k 
                             //＿＿gcd(k,i):为求k和i的最大公约数 k/__gcd(k,i)*i:为求k和i的最小公倍数
            break;
         } 
         else ans+=k;//累加新步长 
    }
}
cout<<ans<<endl;
return 0;
}
