//Maximum consecutive ones
//https://leetcode.com/problems/max-consecutive-ones/

#include<bits/stdc++.h>
using namespace std;
int maxOne(int arr[],int size){
   int count=0,res=0;
   for(int i=0;i<size;i++){
      if(arr[i]==1){
         count++;
      }
      else{
         count=0;
         continue;
      }
      res=max(res,count);
   }
   return res;
}
int main(){ 
  int arr[]={1,0,1,1,1,1,0,1,1};
  int size=sizeof(arr)/sizeof(arr[0]);
   cout<<maxOne(arr,size)<<endl;
  return 0;
}