//Snack Down Question-2
//https://www.codechef.com/SNCK1A21/problems/MINLCM1
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll t;
   cin>>t;
   while(t--)
   {
      ll X,K;
      cin>>X>>K;
      cout<<2*X<<endl;
      ll m=X*K;
      cout<<m*(m-1)<<endl;
   }
  return 0;
}