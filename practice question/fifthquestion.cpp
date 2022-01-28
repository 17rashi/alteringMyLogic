#include<bits/stdc++.h>
using namespace std;
int main(){
   string s1;
   cin>>s1;
   for(int i=0;i<s1.length();i++)
   {
      if(s1[i]==s1[0])
      {
         s1[i]=toupper(s1[i]);
         cout<<s1[i];
      }
      else
         cout<<s1[i];
   }
  return 0;
}