//https://www.codechef.com/CUPA2101/problems/STUFIGHT

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int n,count=0;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
         cin>>arr[i];
      }
      int max=*max_element(arr,arr+n);
      for(int i=0;i<n;i++)
      {
         if(arr[i]==max)
         {
            count++;
         }
      }
      if(count>=2)
      {
         cout<<"fight :("<<endl;
      }
      else
      {
         cout<<"peace :)"<<endl;
      }
      
   }
  return 0;
}