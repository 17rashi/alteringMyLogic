//https://www.codechef.com/CUPA2101/problems/CHEDIV
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      long long int N,count=0;
      cin>>N;
      long long int arr[N];
      long long int X,Y;
      cin>>X>>Y;
      for(long long int i=0;i<N;i++)
      {
         cin>>arr[i];
      }
      for(long long int i=0;i<N;i++)
      {
         if(arr[i]<=X)
         {
            if(arr[i]%Y==0)
            {
               count++;
            }
         }
      }
      cout<<count<<endl;
   }
  return 0;
}