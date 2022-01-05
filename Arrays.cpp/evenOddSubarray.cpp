//Even-Odd subarray

#include<bits/stdc++.h>
using namespace std;
int evenOdd(int arr[],int n){
   int res=1;
   int curr=1;
   for(int i=1;i<n;i++){
      if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0)){
         curr++;
         res=max(curr,res);
      }
      else{
         curr=1;
      }
   }
   return res;
}
int main(){
  int arr[]={10,12,8,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<evenOdd(arr,n)<<endl; 
  return 0;
}