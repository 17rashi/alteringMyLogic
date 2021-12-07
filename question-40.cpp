#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,amazing=0;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];     
   }
   int mx=-1,mn=INT_MAX;
   for(int i=1;i<n;i++)
   {
      if((arr[i]>mx && arr[i]>arr[i+1] || arr[i]<mn && arr[i]<arr[i-1]) && arr[i]!=arr[i-1])
      {
         amazing++;
         mx=max(mx,arr[i]);
         mn=min(mn,arr[i]);
      }
   }
   cout<<amazing<<endl;
  return 0;
}