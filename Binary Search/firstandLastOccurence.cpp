/*
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
*/

//First Occurence using recursive binary search

//Recursive binary search

#include<bits/stdc++.h>
using namespace std;
int bSearch(int arr[],int low,int high,int x){
   int h=high;
   if(low>high){
      return -1;
   }
   int mid=(low+high)/2;
   if(arr[mid]>x){
      return bSearch(arr,low,mid-1,x);
   }
   else if(x>arr[mid]){
      return bSearch(arr,mid+1,high,x);
   }
   else{
      if(mid==h || arr[mid]!=arr[mid+1]){ //first occ- mid==0 || arr[mid-1]!=arr[mid]
         return mid;
      }
      else{
         return bSearch(arr,mid+1,high,x); 
      }
   }
}
int main(){
   int arr[]={5,8,8,10,10};
   int size=sizeof(arr)/sizeof(arr[0]);
   int low=0;
   int high=size-1;
   int x;
   cin>>x;
   cout<<bSearch(arr,low,high,x);
  return 0;
}