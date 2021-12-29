//Reverse an Array

#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size){
   int low=0,high=size-1;
   while(low<high){
      int temp=arr[low];
      arr[low]=arr[high];
      arr[high]=temp;
      low++;
      high--;
   }
}
int main(){
   int arr[]={4,5,8,9,10};
   int size=sizeof(arr)/sizeof(arr[0]);
   reverse(arr,size);
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}