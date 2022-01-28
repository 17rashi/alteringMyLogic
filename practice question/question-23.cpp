//CODECHEF PROBLEM - https://www.codechef.com/problems/MSNSADM1

#include<bits/stdc++.h>
using namespace std;
int maximum(int a1[],int b1[],int n)
{
   int sum=0;
   int max_num=a1[0]*20-b1[0]*10;
   for(int i=1;i<n;i++)
   {
      sum=((a1[i] * 20)-(b1[i]*10));
      if(sum>=max_num)
      {
         max_num=sum;
      }
   }
   if(max_num>0)
      return max_num;
   else
      return 0;
}
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int a1[n];
      int b1[n];
      for(int i=0;i<n;i++)
      {
         cin>>a1[i];
      }
      for(int j=0;j<n;j++)
      {
         cin>>b1[j];
      }
      cout<<maximum(a1,b1,n)<<endl;
   }
  return 0;
}