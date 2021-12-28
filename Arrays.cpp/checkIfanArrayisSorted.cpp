//Check if an array is sorted or not

#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
   for(int i=0;i<n-1;i++){
      // cout<<arr[i+1]<<" "<<arr[i]<<endl;
      if(arr[i+1]<arr[i])
         return false;
   }
   return true;
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   if(isSorted(arr,n)==1){
      cout<<"array is sorted"<<endl;
   }
   else{
      cout<<"Unsorted"<<endl;
   }
  return 0;
}