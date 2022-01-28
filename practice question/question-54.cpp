//Snack down Round 1A
//https://www.codechef.com/SNCK1A21/problems/DANCEMOVES

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
      while(X!=Y)
      {
         if(Y>X)
         {
            ans=X+2;
            X=ans;
            count++;
         }
         else if(X>Y)
         {
            ans=X-1;
            X=ans;
            count++;
         }
      }
      cout<<count<<endl;
   }
  return 0;
}