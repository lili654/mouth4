#include <iostream>
#include <set>
using namespace std;
typedef pair<int,int> PII;
typedef pair<double,double> PDD;

set<PII>s;
// 记录斜率和拮据

int main()
{
    int res = 1;
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(s.find({a,b}) != s.end()) // 完全相同的直线只能操作一次
            continue;
        
        res++;// 每添加一条直线，平面数都得 +1    

        set<PDD>jd;// 记录添加一条执行，它与平面内直线的交点（一个交点只能被统计一次）
        for(auto it = s.begin();it !=s.end();it++)
        {
            double x = (it->second - b)*1.0 / (a - it->first); // 计算交点的坐标值（x,y）
            double y = a*x+b;
            
            if(a != it->first && (jd.find({x,y})==jd.end() || jd.empty()))
            {
                res += 1;
                jd.insert({x,y});
            }
                
        }
        s.insert({a,b});
    }
    cout<<res<<endl;
    return 0;
}
