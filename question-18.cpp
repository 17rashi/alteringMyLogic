#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n=4;
   int counter=0;
   long long int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   sort(arr,arr+n);
   for(int i=0;i<n;i++)
   {
      if(arr[i]==arr[i+1])
      {
         counter++;
      }
      else
      {}

   }
   cout<<counter<<endl;
  return 0;
}