#include<bits/stdc++.h>
using namespace std;
void checkarrayissortedornot(int arr[],int n,int max){
   if(n==1)
   {
      cout<<"YES"<<endl;
      return;
   }
   if(arr[n-2]<=max){
      max=arr[n-2];
      checkarrayissortedornot(arr,n-1,max);
   }
   else{
      cout<<"NO"<<endl;
      return;
   }
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int max=arr[n-1];
   checkarrayissortedornot(arr,n,max);
  return 0;
}