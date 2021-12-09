#include<bits/stdc++.h>
using namespace std;
string movextotheend(string str){
   if(str.length()==0){
      return "";
   }
   char ch=str[0];
   string ans=movextotheend(str.substr(1));
   if(ch=='x')
   {
      return ans+ch;
   }
   return ch+ans;
}
int main(){
  string str;
  cin>>str;
  cout<<movextotheend(str); 
  return 0;
}