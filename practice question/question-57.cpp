//https://www.codechef.com/COOK134C/problems/AVGFLEX
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int n,count=0,counter=0,ans=0;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<n;i++)
      {
         count=0,counter=0;
         for(int j=0;j<n;j++)
         {
            if(arr[j]<=arr[i])
            {
               count++;
            }
            if(arr[j]>arr[i])
            {
               counter++;
            }
         }
         if(count>counter)
         {
            ans++;
         }
      }
      cout<<ans<<endl;
   }
  return 0;
}