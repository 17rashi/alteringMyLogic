#include<bits/stdc++.h>
using namespace std;
void lengthofstring(string str,int count){
   if(str.length()==0){
      cout<<count<<endl;
      return;
   }
   string ros=str.substr(1);
   lengthofstring(ros,count+1);
}
int main(){
   string str;
   getline(cin,str);
   lengthofstring(str,0);
  return 0;
}