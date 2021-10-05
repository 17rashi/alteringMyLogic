#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,K,count=0;
   cin>>n>>K;
   int time=240-K;
   for(int i=1;i<time;i++)
   {
      if(count<n && time>=5*i)
      {
         time-=i*5;
         count++;
      }
   }
   cout<<count<<endl;
  return 0;
}