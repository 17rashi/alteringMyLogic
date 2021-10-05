#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   cin.ignore();
   string str1,str2;
   while(t--)
   {
      string str;
      getline(cin,str);
      int l=str.length();
      int m=l/2;
      if(l%2==0)
      {
         str1=str.substr(0,m);
         str2=str.substr(m);
      }
      else
      {
         str1=str.substr(0,m);
         str2=str.substr(m+1); 
      }
      sort(str1.begin(),str1.end());
      sort(str2.begin(),str2.end());
      if(str1==str2)
      {
         cout<<"YES"<<endl;
      }
      else
      {
         cout<<"NO"<<endl;
      }
      
   }
  return 0;
}
