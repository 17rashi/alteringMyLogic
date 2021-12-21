//LINEAR SEARCH
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
   int key;
   int arr[]={1,2,6,3,9,12,5};
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<"Enter the element to search : ";
   cin>>key;
   for(int i=0;i<size;i++){
      if(arr[i]==key){
         cout<<"Element found at "<<i<<endl;
         return 0;
      }
   }
   cout<<"Element not found";
  return 0;
}

*/

//BINARY SEARCH

#include<bits/stdc++.h>
using namespace std;
int main(){
   int key;
   int arr[]={1,2,3,4,5};
   int size=sizeof(arr)/sizeof(arr[0]);
   cin>>key;
   int low=0,high=size;
   while(low<=high){
      int mid=(low+high)/2;
      // cout<<low<<" "<<high<<" "<<key<<endl;
      if(key==arr[mid]){
         cout<<mid;
         return 0;
      }
      else if(key<arr[mid]){
         high=mid-1;
      }
      else{
         low=mid+1;
      }
   }
  return 0;
}