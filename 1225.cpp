/*
1+2+...+49=1225
1+2+...+10*11+12+...+27*28+29+..+49=2015
寻找另外不相邻的加号改为乘号，使得结果也为2015，输出乘号前的一个数
*/
#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=46;i++)
    {
        for(j=i+2;j<=48;j++)
        {
            if(i*(i+1)-(i+i+1)+j*(j+1)-(j+j+1)==2015-1225)
            cout<<i<<" "<<j<<endl;
        }
    }

    return 0;
}
