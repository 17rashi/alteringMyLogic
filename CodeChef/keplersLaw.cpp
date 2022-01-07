//https://www.codechef.com/JAN221C/problems/KEPLERSLAW

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
      int t1,t2,r1,r2;
      cin>>t1>>t2>>r1>>r2;
      float m=t1*t1,n=r1*r1*r1,p=t2*t2,q=r2*r2*r2;
      if((m/n)==(p/q)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
   }
  return 0;
}