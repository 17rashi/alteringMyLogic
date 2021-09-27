#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n,int count)
{
   if(n==1)
   {
      return true;
   }
   if(count<=2 && count>=0)
   {
      for(int i=0;i<n;i++)
      {
         if(arr[i+1]-arr[i])
         return true;
      }
   }
   return false;
}
int main(){
   long long int t;
   cin>>t;
   while(t--)
   {
      int count=0;
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<n;i++)
      {
         if(arr[i]!=arr[i+1])
         {
            count++;
         }
      }
      if(check(arr,n,count))
      {
         cout<<"YES"<<endl;
      }
      else
      {
         cout<<"NO"<<endl;
      }
      
   }
  return 0;
}