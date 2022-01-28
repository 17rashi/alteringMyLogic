//https://www.codechef.com/NOV21C/problems/MAKEPAL

#include<bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>>T;
   while(T--){
      long long int N,count=0;
      cin>>N;
      long long int arr[N];
      for(long long int i=0;i<N;i++)
      {
         cin>>arr[i];
      }
      if(N==1)
      {
         cout<<0<<endl;
      }
      else
      {
         for(int i=0;i<N;i++)
         {
            if(arr[i]%2!=0)
            {
               count++;
            }
         }
         if(count%2!=0)
         {
            count--;
         }
         cout<<count/2<<endl;
      } 
   }
  return 0;
}