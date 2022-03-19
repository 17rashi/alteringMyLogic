#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){
   int b[1000];
   int k=low;
   int i=low,j=mid+1;
   while(i<=mid && j<=high){
      if(arr[i]<arr[j]){
         b[k]=arr[i];
         i++;
      }
      else
      {
         b[k]=arr[j];
         j++;
      }
      k++;
   }
   while(j<=high){
      b[k]=arr[j];
         j++;
         k++;
   }
   while(i<=mid){
      b[k]=arr[i];
      k++;
      i++;
   }
   for(k=low;k<=high;k++){
      arr[k]=b[k];
   }
}
void mergeSort(int arr[],int low,int high){
   if(low<high){
      int mid=(low+high)/2;
      mergeSort(arr,low,mid);
      mergeSort(arr,mid+1,high);
      merge(arr,low,mid,high);
   }
}
int main(){
   int size;
   cin>>size;
   int arr[1000];
   for(int i=0;i<size;i++){
      cin>>arr[i];
   }
   int low=0;
   mergeSort(arr,low,size-1);
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
  return 0;
}