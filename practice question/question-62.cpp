//https://www.codechef.com/CUPA2101/problems/ARRQUERY

#include<bits/stdc++.h>
#define ll unsigned long long int 
using namespace std;
int main(){
   int n,Q;
   ll l,r,x;
   cin>>n>>Q;
   ll arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   while(Q--)
   {
      int count=0;
      cin>>l>>r>>x;
      for(ll i=l-1;i<r;i++)
      {
         if(arr[i]>=x)
         {
            break;
         }
         count++;
      }
      cout<<(r-l+1)-count<<endl;
   }
  return 0;
}