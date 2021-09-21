#include<bits/stdc++.h>
using namespace std;
string check(string str)
{
   for(int i=0;i<str.length();i++)
   {
      cout<<"Str"<<str[i]<<endl;
      if((str[i]!=7) || (str[i+1]!=4))
         return "YES";
   }
   return "NO";
}
int main(){
   string str;
   cin>>str;
   cout<<check(str);
  return 0;
}