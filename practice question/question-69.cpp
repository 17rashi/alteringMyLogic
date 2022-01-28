//https://www.codechef.com/problems/TRISQ
#include<bits/stdc++.h>
using namespace std;
int find(int ans)
{
   if(ans<=0)
   {
      return 0;
   }
   return ans+find(ans-1);
}
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int b;
      cin>>b;
      int w=(b-2)/2;
      cout<<find(w)<<endl;
   }
  return 0;
}