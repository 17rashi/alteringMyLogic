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
   for(int i=n-1;i>=index;i--){
      arr[i+1]=arr[i];
   }
   arr[index]=num;
   for(int i=0;i<=n;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}
/*delete Operation*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[100];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int index;
   cin>>index;
   for(int i=0;i<n;i++){
      if(i==index){
         continue;
      }
      else{
         cout<<arr[i]<<" ";
      }
   }
  return 0;
}
*/