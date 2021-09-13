#include<bits/stdc++.h>
using namespace std;
void check(int arr[],int n,int k)
{
   int count=0;
   for(int i=1;i<=n;i++)
   {
      if(arr[i]>=arr[k] && arr[i]>0)
      {
         count++;
      }
   }
   cout<<count<<endl;
}
int main(){
   int n;
   cin>>n;
   int k;
   cin>>k;
   int arr[n];
   for(int i=1;i<=n;i++)
   {
      cin>>arr[i];
   }
   check(arr,n,k);
  return 0;
}