//https://www.programiz.com/dsa/selection-sort

#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[]={4,5,2,1,9,6,0};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<size;i++){
      int minIdx=i;
      for(int j=i+1;j<size;j++){
         if(arr[j]<arr[minIdx]){
            minIdx=j;
         }
      }
      swap(arr[i],arr[minIdx]);
   }
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}