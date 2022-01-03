//Frequencies in an array

#include<bits/stdc++.h>
using namespace std;
void frequencies(int arr[],int n){
   int count=1;
   for(int i=0;i<n;i++){
      if(arr[i]==arr[i+1]){
         count++;
      }
      else{
         cout<<arr[i]<<" "<<count<<endl;
         count=1;
         continue;
      }
   }
}
int main(){
   int arr[]={10};
   int size=sizeof(arr)/sizeof(arr[0]);
   frequencies(arr,size);
  return 0;
}