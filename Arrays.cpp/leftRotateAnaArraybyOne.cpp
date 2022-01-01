//left rotate by one

#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int size){
   int temp=arr[0];
   for(int i=1;i<size;i++){
      arr[i-1]=arr[i];
   }
   arr[size-1]=temp;
}
int main(){
   int arr[]={10,20,60,80};
   int size=sizeof(arr)/sizeof(arr[0]);
   leftRotate(arr,size);
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}