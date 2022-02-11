#include<bits/stdc++.h>
using namespace std;
void printGroups(bool arr[],int n){
   int first=arr[0];
   for(int i=1;i<n;i++){
      if(arr[i]!=arr[i-1]){
         if(arr[i]!=first){
            cout<<"From "<<i+1<<" to ";
         }
         else{
            cout<<(i)<<endl;
         }
      }
   }
   if(arr[n-1]!=arr[0]){
      cout<<(n)<<endl;
   }
}
int main(){
   int n;
   cin>>n;
   bool arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   printGroups(arr,n);
  return 0;
}

//output
/* 
arr[]={1,1,0,0,0,1,1,0,0,1};
output = 2
*/