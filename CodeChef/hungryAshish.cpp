//https://www.codechef.com/COOK137C/problems/PIZZA_BURGER

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int X,Y,Z;
      cin>>X>>Y>>Z;
      if(X>=Y){
         cout<<"PIZZA"<<endl;
      }
      else if(X>=Z && X<Y){
         cout<<"BURGER"<<endl;
      }
      else{
         cout<<"NOTHING"<<endl;
      }
      
   }
  return 0;
}