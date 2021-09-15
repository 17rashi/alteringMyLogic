#include<bits/stdc++.h>
using namespace std;
int main(){
  int k; //rate of banana 1
  int n; //number of dollars
  int w; //dollars, he has to buy from his friend
  cin>>k>>n>>w;
  int sum=0;
  for(int i=1;i<=w;i++)
  {
     int s=k*i;
     sum+=s;
  }
  int ans=sum-n;
  if(ans>0)
      cout<<ans<<endl;
   else
      cout<<0<<endl;
  return 0;
}