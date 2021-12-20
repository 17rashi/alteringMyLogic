//https://www.codechef.com/COOK136C/problems/FRIMEET

#include<bits/stdc++.h>
using namespace std;
bool meetup(int X1,int X2){
   if(X1>=X2)
      return true;
   else
      return false;
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int X1,X2;
      cin>>X1>>X2;
      if(meetup(X1,X2)==1){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }
  return 0;
}