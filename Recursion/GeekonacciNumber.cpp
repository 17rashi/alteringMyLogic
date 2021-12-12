//https://practice.geeksforgeeks.org/problems/geek-onacci-number/0/#

#include<bits/stdc++.h>
using namespace std;
void geekonacci(int A,int B,int C,int N,int M){
   if(N==3){
      cout<<M<<endl;
      return;
   }
      M=A+B+C;
      A=B;
      B=C;
      C=M;
      geekonacci(A,B,C,N-1,M);
}
int main(){
   int A,B,C,N;
   int T;
   cin>>T;
   while(T--)
   {
      cin>>A>>B>>C>>N;
      geekonacci(A,B,C,N,0);
   }

  return 0;
}