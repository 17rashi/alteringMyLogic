//https://www.codechef.com/COOK137C/problems/NOPAL

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int size;
      cin>>size;
      char a[size];
      for(int i=0;i<n;i++){
         if(i%3==0){
            a[i]='p';
         }
         else if(i%3==1){
            a[i]='o';
         }
         else if(i%3==2){
            a[i]='i';
         }
      }
      for(int i=0;i<size;i++){
         cout<<a[i];
      }
      cout<<endl;
   }   
  return 0;
}