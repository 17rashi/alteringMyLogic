#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t; 
   cin.ignore();
   while(t--)
   {
      int count=0;
      string str;
      getline(cin,str);
      if(str.length()<=10)
      {
         cout<<str<<endl;
      }
      if(str.length()>10)
      {
      cout<<str.front();
      for(int i=1;i<str.length()-1;i++)
      {
         count++;
      }
      cout<<count;
      cout<<str.back();
      cout<<endl;
      }
   }
  return 0;
}