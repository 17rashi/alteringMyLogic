#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int p,q,count=0;
   for(int i=0;i<n;i++)
   {
      cin>>p;
      cin>>q;
      if((p!=q || p<q) && q-p>=2)
         count++;
   }
   cout<<count<<endl;
  return 0;
}