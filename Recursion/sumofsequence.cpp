//https://mycode.prepbytes.com/problems/recursion/SEQUENCE

#include<bits/stdc++.h>
using namespace std;
int sumofseq(int x,int m,int n){
   if(m==0)
   {
      return 1;
   }
   int res=pow(x,m)+sumofseq(x,m-1,n);
   return res%n;
}
int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int x,n,m;
    cin>>x>>m>>n;
    cout<<sumofseq(x,m,n);
  }
  return 0;
}