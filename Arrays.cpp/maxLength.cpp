//https://mycode.prepbytes.com/problems/arrays/MAXIMUMLENGTH

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int maxL=1,count=1;
   for(int i=0;i<n;i++){
      if(arr[i]<arr[i+1] && i<n-1){
         // cout<<arr[i]<<" "<<arr[i+1]<<endl;
         count++;
         // cout<<count<<endl;
      }
      else
      {
         maxL=max(count,maxL);
         count=1;
      } 
   }
   cout<<maxL<<endl;
  return 0;
}