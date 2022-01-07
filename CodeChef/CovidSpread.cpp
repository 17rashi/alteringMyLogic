//https://www.codechef.com/JAN221C/problems/COVSPRD

#include<bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>>T;
   while(T--){
      long long int N,D,M=1;
      cin>>N>>D;
      for(long long int i=1;i<=D;i++){
         if(i<=10){
            M=M*2;
            if(M>N){
               M=N;
               break;
            }
         }
         else if(i>10){
            M=M*3;
            if(M>N){
               M=N;
               break;
            }
         }
      }
      cout<<M<<endl;
   }
  return 0;
}