//Remove Duplicates
/*
#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(int arr[],int size){
   for(int i=0;i<size;i++){
      if(arr[i]==arr[i+1]){
         continue;
      }
      else{
         cout<<arr[i]<<" ";
      }
   }
}
int main(){
   int arr[]={10,10,10};
   int size=sizeof(arr)/sizeof(arr[0]);
   removeDuplicates(arr,size);
  return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[],int size){
   int res=1;
   for(int i=1;i<size;i++){
      if(arr[i]!=arr[res-1]){
         arr[res]=arr[i];
         res++;
      }
   }
   return res;
}
int main(){
   int arr[]={10,20,60,60,80,80};
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<removeDuplicates(arr,size);
  return 0;
}