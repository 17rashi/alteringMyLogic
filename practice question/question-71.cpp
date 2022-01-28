//https://www.codechef.com/problems/CCOOK

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t,sum=0;
   cin>>t;
   while(t--)
   {
      sum=0;
      int arr[5];
      for(int i=0;i<5;i++)
      {
         cin>>arr[i];
      }
      for(int i=0;i<5;i++)
      {
         sum+=arr[i];
      }
      if(sum==0)
      {
         cout<<"Beginner"<<endl;
      }
      else if(sum==1)
      {
         cout<<"Junior Developer"<<endl;
      }
      else if(sum==2)
      {
         cout<<"Middle Developer"<<endl;
      }
      else if(sum==3)
      {
         cout<<"Senior Developer"<<endl;
      }
      else if(sum==4)
      {
         cout<<"Hacker"<<endl;
      }
      else 
      {
         cout<<"Jeff Dean"<<endl;
      }
   }
  return 0;
}