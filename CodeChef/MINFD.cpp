//https://www.codechef.com/JAN222C/problems/MINFD

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,sum,counter=1;
      cin>>n>>sum;
      int a[n];
      for(int i=0;i<n;i++){
         cin>>a[i];
      }
      sort(a,a+n,greater<int>());
      int num=a[0];
      for(int i=1;i<n;i++){
         if(num>=sum){
            break;
         }
         counter++;
         num+=a[i];
      }
      if(num>=sum){
         cout<<counter<<endl;
         counter=1;
      }
      else{
         cout<<-1<<endl;
      }
   }
  return 0;
}