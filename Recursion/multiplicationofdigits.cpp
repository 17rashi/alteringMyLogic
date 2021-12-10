//https://mycode.prepbytes.com/problems/recursion/MLOFDGT

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll multiplication(ll n){
   if(n==0)
   {
      return 1;
   }
   int m=n%10;
   return m*multiplication(n/10);
}
int main(){
   int t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      cout<<multiplication(n)<<endl;
   }
  return 0;
}