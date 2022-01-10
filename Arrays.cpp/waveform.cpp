//https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   if(n%2==0){
      for(int i=0;i<n;i++){
         swap(arr[i],arr[i+1]);
         i++;
      }
   }
   else
   {
      for(int i=0;i<n-1;i++){
         swap(arr[i],arr[i+1]);
         i++;
      }
   }
   
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   for(int i=0;i<n;i++){
      if(n%2==0){
         swap(arr[i],arr[i+1]);
         i++;
      }
      else
      {
         if(i<n-1){
            swap(arr[i],arr[i+1]);
            i++;
         }
      }
      
   }
   
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}