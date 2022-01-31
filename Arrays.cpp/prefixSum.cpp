//prefix sum array

#include<bits/stdc++.h>
using namespace std;
int getSum(int prefix_Sum[],int l,int r){
  if(l!=0){
    return prefix_Sum[r]-prefix_Sum[l-1];
  }
  else{
    return prefix_Sum[r];
  }
}
int main(){
  int n;
  cin>>n;
  int arr[1000];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int prefix_sum[n];
  prefix_sum[0]=arr[0];
  for(int i=1;i<n;i++){
    prefix_sum[i]=prefix_sum[i-1]+arr[i];
  }
  cout<<getSum(prefix_sum,0,2)<<endl;
  cout<<getSum(prefix_sum,1,3)<<endl;
  cout<<getSum(prefix_sum,2,6)<<endl;
  return 0;
}