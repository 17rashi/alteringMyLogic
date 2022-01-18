//https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,count=0;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]!=arr[j]){
            count++;
         }
         
      }
      if(count==0){
         cout<<arr[i]<<endl;
      }
   }
  return 0;
}