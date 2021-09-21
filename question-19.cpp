#include<bits/stdc++.h>
using namespace std;
void check(string str,int counter)
{
  for(int i=0;i<str.length();i++)
   {
      if(str[i]=='4' || str[i]=='7')
      {
         counter++;
      }
   }
   if(counter==4 || counter==7)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
}
int main(){
   string str;
   getline(cin,str);
   int counter=0;
   check(str,counter);
  return 0;
}