#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[]={5,6,1,2,8,9,0};
   int size=sizeof(arr)/sizeof(arr[0]);
   for(int i=1;i<size;i++){
      int insertThis=arr[i];
      int j=i-1;
      while(insertThis<arr[j] && j>=0){
         arr[j+1]=arr[j];
         j--;
      }
      arr[j+1]=insertThis;
   }
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}