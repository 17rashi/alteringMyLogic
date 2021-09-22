#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   char str[n];
   cin>>str;
   for(int i=0;i<n;i++)
   {
      str[i]=tolower(str[i]);
   }
   sort(str,str+n);
   int count=0;
   for(int i=0;i<n;i++)
   {
      if(str[i]!=str[i+1])
         count++;
   }
   if(count>=26)
   {
      cout<<"YES"<<endl;
   }
   else
   {
      cout<<"NO"<<endl;
   }
   
  return 0;
}