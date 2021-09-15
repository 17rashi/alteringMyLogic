#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
   string str;
   getline(cin,str); 
   int count=0,counter=0;
   for(int i=0;i<str.length();i++)
   {
      if(str[i]>='A' && str[i]<='Z')
         count++;
      else if(str[i]>='a' && str[i]<='z')
         counter++;
   }
   if(count>counter)
   {
      transform(str.begin(), str.end(), str.begin(),::toupper);
      cout<<str<<endl;
   }
   else if(count<=counter)
   {
      transform(str.begin(), str.end(), str.begin(),::tolower);
      cout<<str<<endl;
   }
  return 0;
}