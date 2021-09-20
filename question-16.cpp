#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   int total=t;
   float i;
   double sum=0;
   double avg;
   while(t--)
   {
      cin>>i;
      sum+=i;
   }
   avg=((sum)/total);
   cout<<setprecision(12);
   cout<<fixed<<avg<<endl;
  return 0;
}