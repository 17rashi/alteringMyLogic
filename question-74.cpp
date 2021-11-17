//https://www.codechef.com/problems/RECIPE

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
   if(a==0)
   {
      return b;
   }
   return gcd(b%a,a);
}
int findGCD(int arr[],int n)
{
   int result=arr[0];
   for(int i=1;i<n;i++)
   {
      result=gcd(arr[i],result);
      if(result==1)
      {
         return 1;
      }
   }
   return result;
}
int main(){
   int T;
   cin>>T;
   while(T--)
   {
      int N;
      cin>>N;
      int arr[N];
      for(int i=0;i<N;i++)
      {
         cin>>arr[i];
      }
      int m=findGCD(arr,N);
      for(int i=0;i<N;i++)
      {
         cout<<arr[i]/m<<" ";
      }
   }
  return 0;
}