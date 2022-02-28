#include<bits/stdc++.h>
using namespace std;
int ceilingofNumber(int arr[],int size,int x){
   int low=0,high=size-1;
   int ans=0;
   int mid=(low+high)/2;
   while(low<=high){
       if(arr[mid]>x){
           high=mid-1;
       }
       else if(arr[mid]<x){
           low=mid+1;
       }
       else{
          return mid;
       }
       mid=(low+high)/2;
   }
   return low;
}
int main(){
   int arr[]={10,20,30,40,60,70,90};
   int size=sizeof(arr)/sizeof(arr[0]);
   int x;
   cin>>x;
   cout<<ceilingofNumber(arr,size,x)<<endl;
  return 0;
}