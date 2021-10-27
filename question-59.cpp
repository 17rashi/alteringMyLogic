#include<bits/stdc++.h>
using namespace std;
int main(){
   //editing required
   int t;
   cin>>t;
   while(t--)
   {
      int n,no=0,yes=0;
      string str;
      cin>>n>>str;
      for(int i=0;i<str.length();i++)
      {
         if(str[i]=='N')
         {
            no++;
         }
         else
         {
            yes++;
         }
      }
      if(yes>no)
      {
         cout<<"INDIAN"<<endl;
      }
      else if(yes<no)
      {
         cout<<"NOT INDIAN"<<endl;
      }
      else
      {
         cout<<"NOT SURE"<<endl;
      }
      
   }
  return 0;
}