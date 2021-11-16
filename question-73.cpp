#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      int min=0,max=0;
      string s1,s2;
      cin>>s1>>s2;
      for(int i=0;i<s1.length();i++)
      {
         if(s1[i]=='?' || s2[i]=='?')
         {
            max+=1;
         }
         else if(s1[i]!=s2[i])
         {
            min+=1;
            max+=1;
         }
      }
      cout<<min<<" "<<max<<endl;
   }
  return 0;
}