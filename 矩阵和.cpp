#include <iostream>
using namespace std;
int n,m,q;
const int N=1010;
int a[N][N];int s[N][N];
int x1,y1,x2,y2;
int  main()
{
    cin>>n>>m>>q;
    int i,j;
    for(i=1;i<=n;i++){
        {for(j=1;j<=m;j++)
        
            cin>>a[i][j];
        }
    }
    
     for(i=1;i<=n;i++)
     {   for(j=1;j<=m;j++)
        {
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
        }
     } 
    
    
    while(q--)
    {
        cin>>x1>>y1>>x2>>y2;
        cout<<s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1]<<endl;
    }

 return 0;   
}
