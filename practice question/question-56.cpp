//https://www.codechef.com/COOK134C/problems/CHEFSLP
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int N,L,X;
      cin>>N>>L>>X;
      int R=N-L;
      int minPair=min(L,R);
      int ans=minPair*X;
      cout<<ans<<endl; 
   }
  return 0;
}