#include<iostream>
#include<algorithm>
#include<string>
#include <sstream>
#define endl "\n"
using namespace std;
int main()
{
     string num;
     int i, flag=1, count=0;
     // char n[30];
     for(i=11; i<=20222; i++)
     {
         stringstream ss;
         ss<<i;
         num = ss.str();
         flag=1;
//           num=itoa(i,n,10);i don't know why the function 'itoa(i,n,10)' can't be used here,then the function is replaced by //'ss.str()'.
           for(int j=num.size()-1; j>0; j--)
           {
               if(num[j-1]>num[j])
               {
                   flag=0;
                   continue;
            }
        }
        if(flag==1)
        {
            if(i>20)
            {
                count++;
            }
            if(num.size()*2+1<=10)
            {
                count=count+(10-(num[num.size()-1]-'0'));
            }
        }
    }
    cout<<count;
    return 0;
 }
