//stock buy and sell problem

#include<bits/stdc++.h>
using namespace std;
int maxprofit(int arr[],int size){
   int profit=0;
   for(int i=1;i<size;i++){
      if(arr[i]>arr[i-1]){
         profit+=arr[i]-arr[i-1];
      }
   }
   return profit;
}
int main(){
   int arr[]={1,5,3,8,12};
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<maxprofit(arr,size)<<endl;
  return 0;
}