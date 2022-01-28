#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int t;
   cin>>t;
   while(t--)
   {
      long long int n,min_ele=INT_MAX;
      cin>>n;
      long long int arr[n];
      for(long long int i=0;i<n;i++)
      {
         cin>>arr[i];
      }
      if(n==1)
      {
         cout<<arr[0]<<endl;
      }
      else
      {   
         // for(long long int i=0;i<n;i++)
         // {
         //    for(int j=i+1;j<n;j++)
         //    {
         //       long long int sum=arr[i]+arr[j];
         //       min_ele=min(min_ele,sum);
         //    }

         //OPTIMIZE APPROACH
         sort(arr,arr+n);
         cout<<arr[0]+arr[1]<<endl;
         }         
   }
  return 0;
}