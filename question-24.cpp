//CodeChef problem- https://www.codechef.com/problems/KTTABLE

#include<bits/stdc++.h>
using namespace std;
int kitchenTable(int a[],int b[],int n)
{
   int count=0,sum=0;
   for(int i=0;i<n;i++)
   {
      if(a[i]>=b[i])
      {
         count++;
      }
      sum=sum+a[i];
      a[i+1]=a[i+1]-sum;
   }
   return count;
}
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int a[n];
      int b[n];
      for(int i=0;i<n;i++)
      {
         cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
         cin>>b[i];
      }
      cout<<kitchenTable(a,b,n)<<endl;
   }
  return 0;
}