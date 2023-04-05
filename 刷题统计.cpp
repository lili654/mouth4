/*刷题统计：小明决定从下周一开始努力刷题准备蓝桥杯竞赛。他计划周一至周五每天 做 a 道题目, 
周六和周日每天做 b 道题目。请你帮小明计算, 按照计划他将在 第几天实现做题数大于等于 nn题?
*/

#include<bits/stdc++.h>

using namespace std;

/*本题的N的数很大，如果直接循环会超时，所以通过每周的总和取余，来进行7天的循环*/

int main(){

    long a,b,n,sum=0,e,i=0,t=1,c;

    cin>>a>>b>>n;

    c=n/(a*5+b*2);

    e=n%(a*5+b*2);

    for(i=1;i<=7;i++){

        if(i>5){

            sum=sum+b;

            if(sum>=e){

            break;

        }

        }

        else {

        sum=sum+a;

        if(sum>=e){

            break;

        }    

        }

    }

    if(e==0){

        cout<<c*7;

    }

    else

    cout<<c*7+i<<endl;

    return 0;

}
