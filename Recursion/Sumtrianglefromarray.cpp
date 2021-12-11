//https://www.geeksforgeeks.org/sum-triangle-from-array/

#include<bits/stdc++.h>
using namespace std;
void sumtriangleofarray(int arr[],int n){
   if(n==1){
      return;
   }
   int m=n-1;
   int sum[m];
   for(int i=0;i<n-1;i++){
      sum[i]=arr[i]+arr[i+1];
   }
  sumtriangleofarray(sum,n-1);
  for(int i=0;i<n-1;i++){
      cout<<sum[i]<<" ";
  }
  cout<<endl;
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   sumtriangleofarray(arr,n);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}