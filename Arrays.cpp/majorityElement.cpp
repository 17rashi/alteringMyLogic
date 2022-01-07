//NAIVE SOLUTION OF majority element in an array.
/*
#include<bits/stdc++.h>
using namespace std;
int majority(int arr[],int size){
   for(int i=0;i<size;i++){
      int count=1;
      for(int j=i+1;j<size;j++){
         if(arr[i]==arr[j]){
            count++;
         }
      }
      if(count>size/2){
         return i;
      }
   }
   return -1;
}
int main(){
   int arr[]={8,3,4,8,8};
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<majority(arr,size)<<endl;
  return 0;
}
*/

//OPTIMISED SOLUTION

#include<bits/stdc++.h>
using namespace std;
int majority(int arr[],int size){
   int res=0,count=1;
   for(int i=1;i<size;i++){
      if(arr[res]==arr[i]){
         count++;
      }
      else{
         count--;
      }
      if(count==0){
         res=i;
         count=1;
      }
   }
   count=0;
   for(int i=0;i<size;i++){
      if(arr[res]==arr[i]){
         count++;
      }
   }
   if(count<=size/2){
      return -1;
   }
   return res;
}
int main(){
   int arr[]={8,3,4,8,8,3};
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<majority(arr,size)<<endl;
  return 0;
}