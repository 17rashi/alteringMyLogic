#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
int ispalindrome(string str)
{
   int ans=0;
   int str[26]={0};
   for(int i=0;i<str.length();i++)
   {
      bool f=true;
      int cnt=0;
      for(int i=0;i<26;i++)
      {
         if(str[i]&1 && cnt>=1)
         {
            f=false;
         }
         else if(str[i]&1)
         {
            cnt++;
         }
      }
      if(f)ans++;
   }
   return ans;
}
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      string str;
      int n,count=0;
      cin>>n;
      for(int i=0;i<n;i++)
      {
         cin>>str;
         cout<<ispalindrome(str);
      }
   }
  return 0;
}