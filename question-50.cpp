//Question-Secret Code (prepbytes)
//https://mycode.prepbytes.com/contest/MARATHONOCT21/problems/SECMSG

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      string str;
      cin>>str;
      for(int i=0;i<str.length();i++)
      {
         if((str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
         {
            cout<<str[i];
         }
      }
   }  
  return 0;
}