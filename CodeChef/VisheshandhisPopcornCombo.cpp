//https://www.codechef.com/EXUN21C/problems/POPCORN

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,ans;
  cin>>t;
  while(t--){
     int A1,A2,B1,B2,C1,C2;
      cin>>A1>>A2;
      cin>>B1>>B2;
      cin>>C1>>C2;
      int sum1,sum2,sum3;
      sum1=A1+A2;
      sum2=B1+B2;
      sum3=C1+C2;
      ans=max(sum1,max(sum2,sum3));
  } 
  cout<<ans<<endl;
  return 0;
}