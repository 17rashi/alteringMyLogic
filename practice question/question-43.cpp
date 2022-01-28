#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   int sum=0;
   while(t--)
   {
      int n,m;
      cin>>n>>m;
      int arr[n][m];
      for(int i=0;i<n;i++)
      {
         for(int j=0;j<m;j++)
         {
            cin>>arr[i][j];
         }
      }
      for(int i=0;i<n;i++)
      {
         for(int j=0;j<m;j++)
         {
            sum+=arr[i][j];
         }
         if(sum==n)
         {
            cout<<i<<endl;
         }
         sum=0;
      }

   }
  return 0;
}