#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int t;
   cin>>t;
   while(t--)
   {
      long long int K,N;
      cin>>N>>K;
      long long int arr[N];
      for(int i=0;i<N;i++)
      {
         cin>>arr[i];
      }
      sort(arr,arr+N,greater<int>());
      int m=arr[K-1];
      long long int count=0;
      for(int i=0;i<N;i++)
      {
         if(arr[i]>=m)
         {
            count++;
         }
         
      }
      cout<<count<<endl;
   }
  return 0;
}