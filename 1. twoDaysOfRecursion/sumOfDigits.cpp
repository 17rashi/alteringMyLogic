#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n)
{
   if(n==0)
      return 0;
   return n%10+sumOfDigits(n/10);
}
int main(){
   int n;
   cin>>n;
   cout<<sumOfDigits(n);
  return 0;
}

//NOTE: Time Complexity = theta(n)
//NOTE: Space Complexity = theta(n)
/* but in iterative solution take less space, it has less value of space complexity so it is better to use iterative solution */