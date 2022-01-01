//count leaders in an array - if all the elements on right side is smaller then an element is a leader

#include<bits/stdc++.h>
using namespace std;
void leaderInAnArray(int arr[],int size){
   int count=0;
   for(int i=0;i<size;i++){
      count=0;
      for(int j=i+1;j<size;j++){
         if(arr[i]<arr[j]){
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