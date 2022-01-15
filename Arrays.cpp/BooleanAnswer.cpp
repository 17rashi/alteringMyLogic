//https://mycode.prepbytes.com/problems/arrays/NOMERCY

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T--){
    int n,m,count=0,max=-1,res=0;
    cin>>n>>m;
    int arr[10000][10000];
    for(int i=0;i<n;i++){
      count=0;
      for(int j=0;j<m;j++){
        cin>>arr[i][j];
        if(arr[i][j]==1){
          count++;
        }
      }
      if(count>0 && count>res){
        res=count;
        max=i;
      }
    }
      cout<<max<<endl;
  }
  return 0;
}