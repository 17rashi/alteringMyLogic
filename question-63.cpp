
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int N,C,K,count=0,sum=0;
      int arr[N];
      for(int i=0;i<N;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<N;i++)
      {
         if(sum<=C && sum>=K)
         {
            sum=arr[i]+arr[i+1];
         }
      }
   }
  return 0;
}