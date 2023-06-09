/*
题目
如果一个质数 P 的每位数字都是质数, 而且每两个相邻的数字组成的两位 数是质数
, 而且每三位相邻的数字组成的三位数是质数, 依次类推, 如果每相 邻的 k位数字组成的 k位数都是质数, 则 P称为超级质数。
如果把超级质数 P 看成一个字符串, 则这个超级质数的每个子串都是质 数。
例如, 53 是一个超级质数。

请问, 最大的超级质数是多少?
*/
/*
解析
1.10以内的质数有2，3，5，7
2.根据超级质数的组成规则可以组成23，37，53，57，73这样的相邻质数组合,
满足要求的有23，37，53，73 
3.根据这些组合可以组成237，373，573，737这样的数字组合，满足要求的只有373
4.根据组成规则已经不能在373的基础之上进行组合，即为最大超级质数 
*/
//可以用以下代码验证是否是质数：输出结果为2
#include <iostream>

using namespace std;

int main()
{
    int i,n,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        sum++;
    }
    cout<<sum;
    return 0;
}
