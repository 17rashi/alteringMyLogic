#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[],int size){
   for(int i=0;i<size-1;i++){
      swap(arr[i],arr[i+1]);
      i++;
   }
}
int main(){
   int size;
   cin>>size;
   int arr[1000];
   for(int i=0;i<size;i++){
      cin>>arr[i];
   }
   swapAlternate(arr,size);
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}