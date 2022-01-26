#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[],int n,int k){
   int curr_sum=0,max_sum=0;
   for(int i=0;i<k;i++){
      curr_sum+=arr[i];
   }
   for(int i=k;i<n;i++){
      curr_sum+=(arr[i]-arr[i-k]);
      max_sum=max(curr_sum,max_sum);
   }
   return max_sum;
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   //maximum sum;
   int k;
   cin>>k;
   cout<<maxSum(arr,n,k)<<endl;
  return 0;
}