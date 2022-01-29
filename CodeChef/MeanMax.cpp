//https://www.codechef.com/COOK137C/problems/MEANMAX

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    float sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }    
    float max_ele=*max_element(arr,arr+n);
    for(int i=0;i<n;i++){
      sum+=arr[i];
    }
    sum=(sum-max_ele)/(n-1);
    double res=double(sum+max_ele);
    cout<<fixed<<setprecision(6)<<res<<endl;
  }
  return 0;
}