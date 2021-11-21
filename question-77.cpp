//https://www.codechef.com/COOK135C/problems/DISABLEDKING

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int N;
      cin>>N;
      if(N%2!=0)
      {
         cout<<N-1<<endl;
      }
      else{
         cout<<N<<endl;
      }
   }
  return 0;
}