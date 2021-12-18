//https://www.codingninjas.com/codestudio/problems/encode-the-message_699836

#include<bits/stdc++.h>
using namespace std;
void encode(string str,int count){
   if(str.length()==0){
      return;
   }
   char ch=str[0];
   if(str[0]==str[1]){
      count++;
      encode(str.substr(1),count);
   }
   else{
      cout<<ch<<count;
      count=1;
      encode(str.substr(1),count);
   }
}
int main(){
   int t;
   cin>>t;
   while(t--){
      string str;
      cin>>str;
      encode(str,1);
   }
  return 0;
}