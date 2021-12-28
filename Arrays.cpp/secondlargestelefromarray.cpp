//SECOND LARGEST ELEMENT IN AN ARRAY

//NAIVE SOLUTION
/*
#include<bits/stdc++.h>
using namespace std;
int findmax(int arr[],int n){
   int max=INT_MIN;
   for(int i=0;i<n;i++){
      if(arr[i]>max){
         max=arr[i];
      }
   }
   return max;
}
int secondLargest(int m,int arr[],int n){
   int max_ele=INT_MIN;
   for(int i=0;i<n;i++){
      if(arr[i]>max_ele && arr[i]<m){
         max_ele=arr[i];
      }
   }
   return max_ele;
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int m=findmax(arr,n);
   cout<<secondLargest(m,arr,n);
  return 0;
}
*/

//NAIVE APPROACH
/*
#include<bits/stdc++.h>
using namespace std;
int Largest(int arr[],int n){
  int largest=0;
  for(int i=1;i<n;i++){
     if(arr[i]>arr[largest]){
        largest=i;
     }
  }
  return largest;
}
int secondLargest(int m,int arr[],int n){
   int res=-1;
   for(int i=0;i<n;i++){
      if(arr[i]!=arr[m]){
         if(res==-1){
            res=i;
         }
         else if(arr[i]>arr[res]){
            res=i;
         }
      }
   }
   return arr[res];
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int m=Largest(arr,n);
   cout<<secondLargest(m,arr,n);  
  return 0;
}
*/

//OPTIMISED APPROACH

#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int n){
   int res=-1,largest=0;
   for(int i=1;i<n;i++){
      if(arr[i]>arr[largest]){
         res=largest;
         largest=i;
      }
      else if(res==-1||arr[i]>arr[res]){
         res=i;
      }
   }
   return arr[res];
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   cout<<secondLargest(arr,n);  
  return 0;
}