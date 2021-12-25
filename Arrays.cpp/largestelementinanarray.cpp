//largest element from the array

#include<bits/stdc++.h>
using namespace std;
int findmaxele(int arr[],int n){
   int max=INT_MIN;
   for(int i=0;i<n;i++){
      if(arr[i]>max){
         max=arr[i];
      }
   }
   return max;
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   cout<<findmaxele(arr,n)<<endl;
  return 0;
}
