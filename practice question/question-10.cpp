#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int max_height;
  cin>>max_height;
  int arr[n];
  int count=0;
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
     if(arr[i]<=max_height)
     {
        count++;
     }
     else if(arr[i]>max_height)
     {
        count=count+2;
     }
  }
  cout<<count<<endl;
  return 0;
}