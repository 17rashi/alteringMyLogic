#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[],int n){
   int i=0;
   int mid=0;
   int high=n-1;
   while(i<=high){
      if(arr[i]==0){
         swap(arr[i],arr[mid]);
         i++;
         mid++;
      }
      else if(arr[i]==2){
         swap(arr[i],arr[high]);
         high--;
      }
      else{
         i++;
      }
   }
}
int main(){
   int arr[]={0,1, 2, 2, 1, 0};
   int size=sizeof(arr)/sizeof(arr[0]);
   sort012(arr,size);
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}