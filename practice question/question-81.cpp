//https://www.codechef.com/problems/FLOW017

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
     int n=3;
     int arr[3];
     for(int i=0;i<n;i++)
     {
       cin>>arr[i];
     }
     sort(arr,arr+n);
     cout<<arr[1]<<endl;
   }
  return 0;
}