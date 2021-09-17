#include<bits/stdc++.h>
using namespace std;
int print(int n)
{
   if(n==0)
      return 0;
   cout<<n<<" ";
   print(n-1);
   return 0;
}
int main(){
   int n;
   cin>>n;
   print(n);
  return 0;
}