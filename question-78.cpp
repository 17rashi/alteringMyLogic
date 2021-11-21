//https://www.codechef.com/COOK135C/problems/MISSSUMS

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int arr[0];
      for(int i=1;i<1000000;i++)
      {
         if(i%2!=0)
         {
            n=n-1;
            cout<<i<<" ";
            if(n<=0)
            {
               break;
            }
         }
      }
      cout<<endl;
   }
  return 0;
}