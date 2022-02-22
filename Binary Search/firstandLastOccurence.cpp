#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[],int n,int key){
   int s=0,e=n-1;
   int mid=s+(e-s)/2;
   int ans=-1;
   while(s<=e){
      if(arr[mid]==key){
         ans=mid;
         e=mid-1;
      }
      else if(arr[mid]>key){
         e=mid-1;
      }
      else if(arr[mid]<key){
         s=mid+1;
      }
      mid=s+(e-s)/2;
   }
   return ans;
}
int lastOccurence(int arr[],int n,int key){
   int s=0,e=n-1;
   int mid=s+(e-s)/2;
   int ans=-1;
   while(s<=e){
      if(arr[mid]==key){
         ans=mid;
         s=mid+1;
      }
      else if(arr[mid]>key){
         e=mid-1;
      }
      else if(arr[mid]<key){
         s=mid+1;
      }
      mid=s+(e-s)/2;
   }
   return ans;
}
int main(){
   int arr[]={1,2,3,4,4,4,4,4,4,4,4,5};
   int key=4;
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<firstOccurence(arr,n,key)<<endl;
   cout<<lastOccurence(arr,n,key)<<endl;
  return 0;
}