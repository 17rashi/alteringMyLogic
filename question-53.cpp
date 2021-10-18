#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<n;i++)
      {
         if(i%2==0)
         {
            cout<<arr[i]<<" ";
         }
      }
      cout<<endl;
   }
  return 0;
}