#include<bits/stdc++.h>
using namespace std;
bool areEqual(int arr[],int b[],int n)
{
   if(n%2==0)
   {
      return false;
   }
   for(int i=0;i<n;i++)
   {
      if(arr[i]==b[i] && arr[0]==1)
      {
         if(arr[i+1]-arr[i]==1) 
            return true;
      }
   }
   return false;
}
void reverse(int arr[], int n) {
    reverse(arr, arr + n);
}
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int arr[n], b[n];
      for(int i=0;i<n;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<n;i++)
      {
         b[i]=arr[i];
      }
      reverse(arr,n);
      if(areEqual(arr,b,n))
         cout<<"yes"<<endl;
      else
         cout<<"no"<<endl;
   }
}

