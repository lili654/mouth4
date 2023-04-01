#include <iostream>

using namespace std;

int main()
{
    int day=1,m=1;
    int sum=1;
    while(sum<108)
    {
        day++;
        m+=2;
        sum+=m;
    }
    cout<<day;

    return 0;
}
