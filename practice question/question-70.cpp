//https://www.codechef.com/problems/FLOW009

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
     int Q,P;
     cin>>Q>>P;
    double ans=P*Q;
     if(Q>1000)
     {
       long double sum=ans*0.1;
       ans=ans-sum;
     }
     cout<<fixed<<setprecision(6)<<ans<<endl;
     
   }
  return 0;
}