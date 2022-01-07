#include<bits/stdc++.h>
using namespace std;
bool res(long long int N,long long int M){
   while(N<M){
      if(M%N==0){
         return true;
      }
      else{
         N=N*N;
      }
   }
   return false;
}
int main(){
   int t;
   cin>>t;
   while(t--){
      long long int N,M;
      cin>>N>>M;
      if(res(N,M)==1){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
   }
  return 0;
}