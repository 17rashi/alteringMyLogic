//left rotate by d places
/*
#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int size){
   int temp=arr[0];
   for(int i=1;i<size;i++){
      arr[i-1]=arr[i];
   }
   arr[size-1]=temp;
}
void leftRotatebyD(int arr[],int size,int d){
   for(int i=0;i<d;i++){
      leftRotate(arr,size);
   }
}
int main(){
   int d;
   int arr[]={10,20,60,80};
   int size=sizeof(arr)/sizeof(arr[0]);
   cin>>d;
   leftRotatebyD(arr,size,d);
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}
*/

//OPTIMIZE SOLUTION

#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int low,int high){
   while(low<high){
      swap(arr[low],arr[high]);
      low++;
      high--;
   }
}
void leftRotate(int arr[],int n,int d){
   reverse(arr,0,d-1);
   reverse(arr,d,n-1);
   reverse(arr,0,n-1);
}
int main(){
   int d;
   int arr[]={10,20,60,80};
   int size=sizeof(arr)/sizeof(arr[0]);
   cin>>d;
   leftRotate(arr,size,d);
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }   
  return 0;
}