#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int sequence(int n,int ans)
{
   if(n==1)
   {
      return (ans+n)%mod;
   }
   if(n%2==0)
   {
      return sequence(n/2,(ans+n)%mod);
   }
   else{
      return sequence(n*3+1,(ans+n)%mod);
   }
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    cout<<sequence(n,0)<<endl;
   }
  return 0;
}