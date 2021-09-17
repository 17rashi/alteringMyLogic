#include<bits/stdc++.h>
using namespace std;
int print1toN(int n)
{
   if(n==0)
      return 0;
   print1toN(n-1);
   cout<<n<<" ";
   return 0;
}
int main(){
   int n;
   cin>>n;
   print1toN(n);
  return 0;
}