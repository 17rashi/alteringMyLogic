//Replace pi with 3.14 is the string

#include<bits/stdc++.h>
using namespace std;
void replace1(string str){ //Iterative solution
   for(int i=0;i<str.length();i++)
   {
      if(str[i]=='p' && str[i+1]=='i')
      {
         cout<<3.14;
         i++;
      }
      else
      {
         cout<<str[i];
      }    
   }
}
void replace(string str){ //recursive solution
   if(str.length()==0)
   {
      return;
   }
   if(str[0]=='p'&&str[1]=='i')
   {
      cout<<3.14;
      replace(str.substr(2));
   }
   else
   {
      cout<<str[0];
      replace(str.substr(1));
   }
   
}
int main(){
   string str;
   cin>>str;
   // replace1(str);
   replace(str);
  return 0;
}