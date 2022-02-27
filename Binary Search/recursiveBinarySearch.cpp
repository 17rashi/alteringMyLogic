//Recursive binary search

#include<bits/stdc++.h>
using namespace std;
int bSearch(int arr[],int low,int high,int x){
   int mid=(low+high)/2;
   if(low>high){
      return -1;
   }
   if(arr[mid]==x){
      return mid;
   }
   if(arr[mid]>x){
      return bSearch(arr,low,mid-1,x);
   }
   else{
      return bSearch(arr,mid+1,high,x);
   }
}
int main(){
   int arr[]={1,2,4,5,7,8,9,11};
   int size=sizeof(arr)/sizeof(arr[0]);
   int low=0;
   int high=size-1;
   int x;
   cin>>x;
   cout<<bSearch(arr,low,high,x);
  return 0;
}