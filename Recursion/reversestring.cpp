//Reverse a string using recursion

#include<bits/stdc++.h>
using namespace std;
void reverse(string str){
   if(str.length()==0){
      return;
   }
   char ch=str[0];
   reverse(str.substr(1));
   cout<<ch<<" ";
}
int main(){
   string str;
   cin>>str;
   reverse(str);
  return 0;
}