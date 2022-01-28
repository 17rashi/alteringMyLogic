#include<bits/stdc++.h> //hit the lottery
using namespace std;
int print(long long int n,long long int count)
{
   if(n>=100)
   {
      return count+print(n-100,count++);
   }
   if(n<100 && n>=20)
   {
      return count+print(n-20,count++);
   }
   if(n<20 && n>=10)
   {
      return count+print(n-10,count++);
   }
   if(n<10 && n>=5)
   {
      return count+print(n-5,count++);
   }
   if(n<5 && n>=1)
   {
      return count+print(n-1,count++);
   }
  return count;
}
int main(){
  long long int n;
  cin>>n;
   long long int count=0;
  cout<<print(n,count)<<endl;
  return 0;
}