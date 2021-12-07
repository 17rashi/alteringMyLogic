#include<bits/stdc++.h>
using namespace std;
int power(int n,int m)
{
   if(m==0)
      return 1;
   return power(n,m-1)*n;
}
int power1(int n,int m){
   if(m==0)
      return 1;
   if(m%2==0)
      return power1(n*n,m/2);
   return n*power1(n*n,(m-1)/2);
}
int main(){
   int n,m;
   cin>>n>>m;
   cout<<power(n,m)<<endl;
   cout<<power1(n,m);
  return 0;
}