#include <iostream>
#include<climits>  //INT＿MAX 头文件
using namespace std;

int main()
{
    int i,m;
    for(i=6;i<INT_MAX;i++)
    {
      if((i-1)%5!=0) continue;
      {
        m=i;
        m-=1;
        m=m/5*4;
      }
      if(m%5!=2) continue;
      {
        m-=2;
        m=m/5*4;
      }
        if(m%5!=3) continue;
      {
        m-=3;
        m=m/5*4;
      }
      if(m%5!=4) continue;
      {
        m-=4;
        m=m/5*4;
      }
      if(m==0||m%5!=0) continue;
      cout<<i<<endl;
      break;
    }
    
    
    return 0;
}
