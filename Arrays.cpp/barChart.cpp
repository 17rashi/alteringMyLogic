#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int MAX=0;
  for(int i=0;i<n;i++){
    if(arr[i]>MAX){
        MAX=arr[i];
    }
  }
  for (int i = 0; i < MAX; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if ( (MAX-(arr[j]))<=i)
      {
        cout<<"*  ";
      }
      else
      {
        cout<<"   ";
      }
    }
      cout<<endl;
    }
  return 0;
}