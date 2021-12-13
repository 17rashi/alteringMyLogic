#include<bits/stdc++.h>
using namespace std;
void linearsearch(int arr[],int n,int target){
   if(arr[n-1]==target){
      cout<<n;
      return;
   }
   else
   {
      linearsearch(arr,n-1,target);
   }
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int target;
   cin>>target;
   linearsearch(arr,n,target);
  return 0;
}