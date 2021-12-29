//MOVE ZEROES TO THE END
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[]={0,20,0,40,56,0,12};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<size;i++){
      if(arr[i]==0){
         for(int j=size-1;j>i;j--){
            swap(arr[i],arr[j]);
         }
      }
   }
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
void moveToEnd(int arr[],int size){
   int count=0;
   for(int i=0;i<size;i++){
      if(arr[i]!=0){
         // cout<<arr[i]<<" "<<arr[count]<<endl;
         swap(arr[i],arr[count]);
         count++;
      }
   }
}
int main(){
   int arr[]={20,0,0,0,0,0,40,56,0,12,9,0,0};
   int size=sizeof(arr)/sizeof(arr[0]);
   moveToEnd(arr,size);  
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}