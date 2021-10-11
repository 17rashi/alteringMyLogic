//https://www.codechef.com/CUPA2101/problems/BALBRACK

#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      string str;
      cin>>str;
      int count=0, len=str.length();
      for(int i=0;i<str.length();i++)
      {
         if(str[i]=='(')
         {
            count++;
         }
      }
      for(int i=0;i<str.length();i++)
      {
         if(str[i]==')')
         {
            count--;
         }
      }
      if(count>0)
      {
         cout<<len-count<<endl;
      }
      else
      {
         cout<<len+count<<endl;
      }
      
   }  
  return 0;
}