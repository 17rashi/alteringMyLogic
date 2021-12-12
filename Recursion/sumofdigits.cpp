//https://www.geeksforgeeks.org/sum-digit-number-using-recursion/

#include<bits/stdc++.h>
using namespace std;
void sumofdigits(int n,int sum){
      if(n==0){
         cout<<sum<<endl;
         return;
      }
       int m=n%10;
       sum+=m;
       sumofdigits(n/10,sum);
}
int main(){
   int n;
   cin>>n;
   sumofdigits(n,0);
  return 0;
}