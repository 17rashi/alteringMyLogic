#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
      string str;
      cin>>str;
      for(int i=0;i<str.length();i++){
         for(int j=i+1;j<str.length();j++)
         {
            if(str[i]==str[j])
            {
               cout<<"NO"<<endl;
               break;
            }
         }
         cout<<"YES"<<endl;
         break;
      }
      
   }
  return 0;
}