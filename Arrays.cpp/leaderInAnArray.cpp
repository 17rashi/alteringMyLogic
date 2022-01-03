//count leaders in an array - if all the elements on right side is smaller then an element is a leader
/*
#include<bits/stdc++.h>
using namespace std;
void leaderInAnArray(int arr[],int size){
   int count=0;
   for(int i=0;i<size;i++){
      count=0;
      for(int j=i+1;j<size;j++){
         if(arr[i]<=arr[j]){
            count++;
            break;
         }
      }
      if(count==0)
      {
         cout<<arr[i]<<" ";
      }
   }
}
int main(){
   int arr[]={30,20,10};
   int size=sizeof(arr)/sizeof(arr[0]);
   leaderInAnArray(arr,size);
  return 0;
}
*/

//OPTIMISED SOLUTION 

#include<bits/stdc++.h>
using namespace std;
void leaderInAnArray(int arr[],int size){
   int current_Leader=arr[size-1];
   cout<<current_Leader<<" ";
   for(int i=size-1;i>=0;i--){
      if(arr[i]>current_Leader){
         cout<<arr[i]<<" ";
         current_Leader=arr[i];
      }
   }
}
int main(){
   int arr[]={7,11,4,10,6,5,2};
   int size=sizeof(arr)/sizeof(arr[0]);
   leaderInAnArray(arr,size);
  return 0;
}