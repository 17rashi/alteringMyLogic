//https://www.codechef.com/COOK137C/problems/MASKPOL

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int N,A;
      cin>>N>>A;
      int I=N-A;
      if(I>A){
         cout<<A<<endl;
      }
      else if(I<=1){
         cout<<1<<endl;
      }
      else{
         cout<<I<<endl;
      }
   }
  return 0;
}