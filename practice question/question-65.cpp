//https://www.codechef.com/NOV21C/submit/EQUALCOIN

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while (t--)
   {
      long long int X,Y;
      cin>>X>>Y;
      if(X%2==0)
      {
         if(X==0 && Y%2==0)
         {
            cout<<"YES"<<endl;
         }
         else if(X==0 && Y%2!=0)
         {
            cout<<"NO"<<endl;
         }
         else
         {
            cout<<"YES"<<endl;
         }
      }
      else
      {
         cout<<"NO"<<endl;
      }
      
   }
   
  return 0;
}