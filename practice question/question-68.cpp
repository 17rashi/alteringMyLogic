//https://www.codechef.com/problems/MISSP
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int N,x;
      cin>>N;
      int arr[N];
      for(int i=0;i<N;i++)
      {
         cin>>arr[i];
      }
      sort(arr,arr+N);
      for(int i=0;i<N;i=i+2)
      {
         if(arr[i]!=arr[i+1])
         {
            x=arr[i];
            break;
         }
      }
      cout<<x<<endl;
   }
  return 0;
}