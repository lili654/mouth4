#include <iostream>
using namespace std;
int n,i,ans=0;
//pan duan zhi shu
bool is_prime(int x)
{
  for(int i=2;i<x;i++)
    if(x%i==0)
    return false;
    return true;
  
}
int main()
{
  cin>>n;
  for(int j=2;j<n;j++)
  {
    if(n%j==0&&is_prime(j))
    
    ans++;
  }
  cout<<ans<<endl;
  return 0;
}
