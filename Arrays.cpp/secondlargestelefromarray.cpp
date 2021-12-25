#include<bits/stdc++.h>
using namespace std;
int findmax(int arr[],int n){
   int max=INT_MIN;
   for(int i=0;i<n;i++){
      if(arr[i]>max){
         max=arr[i];
      }
   }
   return max;
}
int secondLargest(int m,int arr[],int n){
   int max_ele=INT_MIN;
   for(int i=0;i<n;i++){
      if(arr[i]>max_ele && arr[i]<m){
         max_ele=arr[i];
      }
   }
   return max_ele;
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int m=findmax(arr,n);
   cout<<secondLargest(m,arr,n);
  return 0;
}
