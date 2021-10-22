//Snack down Round 1A

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int X,Y,count=0;
      cin>>X>>Y;
      int ans=X;
      if(Y>X)
      {
         ans=X+2;
         X=ans;
         count++;
         cout<<count<<endl;
      }
      else if(X>Y)
      {
         ans=X-1;
         X=ans;
         count++;
         cout<<count<<endl;
      }
      cout<<count<<endl;
   }
  return 0;
}