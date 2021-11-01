//https://www.codechef.com/problems/CHN15A
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int N,K,count=0;
      cin>>N>>K;
      int arr[N];
      for(int i=0;i<N;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<N;i++)
      {
         if((arr[i]+K)%7==0)
         {
            count++;
         }
      }
      cout<<count<<endl;
   }
  return 0;
}