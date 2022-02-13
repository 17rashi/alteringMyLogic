//https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

//https://leetcode.com/problems/trapping-rain-water/

#include<bits/stdc++.h>
using namespace std;
int getWater(int arr[],int n){
  long long int res=0;
  int lMax[n],rMax[n];
  lMax[0]=arr[0];
  for(int i=1;i<n;i++){
    lMax[i]=max(lMax[i-1],arr[i]);
  }
  rMax[n-1]=arr[n-1];
  for(int i=n-2;i>=0;i--){
    rMax[i]=max(arr[i],rMax[i+1]);
  }
  for(int i=1;i<n-1;i++){
    res=res+(min(lMax[i],rMax[i])-arr[i]);
  }
      return res;
}
int main(){
   int arr[]={8,8,2,4,5,5,1};
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<getWater(arr,size)<<endl;
  return 0;
}