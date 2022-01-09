//https://mycode.prepbytes.com/problems/arrays/NOMERCY

#include<bits/stdc++.h>
using namespace std;
int main(){
   int T;
   cin>>T;
   while(T--){
      int n,m,count=0,res=0,max=0;
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
      if(res>0){
         cout<<max<<endl;
      }
      else{
         cout<<-1<<endl;
      }
   }
  return 0;
}