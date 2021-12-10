//https://mycode.prepbytes.com/problems/recursion/PATRN

#include <bits/stdc++.h>
using namespace std;
void pattern(int n,int m){
   if(n>0){
      cout<<n<<" ";
      pattern(n-5,m);
   } 
   cout<<n<<" ";
}
int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int m=n;
    pattern(n,m);
  }
  return 0;
}