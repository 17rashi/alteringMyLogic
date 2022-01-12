//https://www.codechef.com/EXUN21C/problems/SUMPARITY

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,AND;
      cin>>n>>AND;
      if(n==1 && AND%2==0){
         cout<<"Even"<<endl;
      }
      else if(AND%2!=0){
         if(n==1 || n%2!=0){
            cout<<"ODD"<<endl;
         }
         else{
            cout<<"EVEN"<<endl;
         }
      }
      else{
         cout<<"IMPOSSIBLE"<<endl;
      }
   }
  return 0;
}