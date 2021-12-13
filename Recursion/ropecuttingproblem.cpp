#include<bits/stdc++.h>
using namespace std;
int numberOfCutInRope(int n,int a,int b,int c){
   if(n==0){
      return 0;
   }
   if(n<0){
      return -1;
   }
   int res=max(numberOfCutInRope(n-a,a,b,c),max(numberOfCutInRope(n-b,a,b,c),numberOfCutInRope(n-c,a,b,c))); 
   if(res==-1){
      return -1;
   }
   return res+1;
}
int main(){
   int n,a,b,c;
   cin>>a>>b>>c;
   cin>>n;
   cout<<numberOfCutInRope(n,a,b,c);
  return 0;
}