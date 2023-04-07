/*
判断2022年里有多少个顺子日期
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int months[]={0,31,28,31,30,31,
            30,31,31,30,31,30,31};
bool check(string str)
{
    for(int i=0;i+2<str.size();i++)
    
        if(str[i+1]==str[i]+1&&str[i+2]==str[i]+2)
        return true;
        return false;
    
}

int main()
{
    int year=2022,month=1,day=1;
    int res=0;
    for(int i=0;i<365;i++)
    {
        char str[10];
        sprintf(str,"%04d%02d%02d",year,month,day);  
        if(check(str))
        res++;
        if(++day>months[month])
        {
            day=1;
            month++;
        }
    }
    cout<<res<<endl;
    return 0;
}
