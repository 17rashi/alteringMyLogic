/*Insertion in an array*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[100];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int index,num;
   cin>>index>>num;
   for(int i=0;i<=n;i++){
      if(i==index){
         arr[i]=num;
         cout<<arr[i]<<" ";
      }
      else{
         cout<<arr[i]<<" ";
      }
   }
  return 0;
}