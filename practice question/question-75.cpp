#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int n,k,count=0;
      cin>>n>>k;
      int arr[n];
      for(int i=0;i<n;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<n-(k-1);i++)
      {
         int m=(i-k+n);
         
         for(int j=i;j<m;j++)
         {
            
         }
         cout<<endl;
      }
   }
  return 0;
}