//https://www.codechef.com/CUPA2101/problems/CHEFSUB

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int n,count=0,ans=INT_MIN;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<n;i++)
      {
         if(arr[i]%2==0)
         {
            count++;
            
         }
         
         else
         {
            count=0;
         }
         ans=max(ans,count);
      }
      cout<<ans<<endl;
   }
  return 0;
}