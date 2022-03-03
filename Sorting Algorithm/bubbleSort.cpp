//https://www.programiz.com/dsa/bubble-sort 

#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[]={5,6,1,2,8,9,0};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<size;i++){
      bool swapped=false;
      for(int j=1;j<size-i;j++){
         if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            swapped=false;
         }
         // for(int i=0;i<size;i++){
         //    cout<<arr[i]<<" ";
         // }
      }
      if(swapped==true){
         break;
      }
   }
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}