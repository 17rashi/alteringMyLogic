//Maximum Subarray sum

/*
#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[],int n){
  int res=arr[0];
  for(int i=0;i<n;i++){
    int curr=0;
    for(int j=i;j<n;j++){
      curr=curr+arr[j];
      res=max(res,curr);
    }
  }
  return res;
}
int main(){
  int arr[]={1,-2,3,-1,2};
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<maxSum(arr,size)<<endl;
  return 0;
}
*/

//EFFECIENT SOLUTION

#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={-5,1,-2,3,-1,2,-2};
  int res=arr[0],maxEnding=arr[0];
  int size=sizeof(arr)/sizeof(arr[0]);  
  for(int i=1;i<size;i++){
    maxEnding=max(maxEnding+arr[i],arr[i]);
    res=max(res,maxEnding);
  }
  cout<<res<<endl;
  return 0;
}