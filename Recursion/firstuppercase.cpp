#include<bits/stdc++.h>
using namespace std;
void firstUppercase(string str){
   if(str.length()==0){
      cout<<-1<<endl;
      return;
   }
   if(!(str[0]>='A' && str[0]<='Z')){
      firstUppercase(str.substr(1));
   }
   else
   {
      cout<<str[0]<<endl;
      return;
   }  
}
int main(){
   string str;
   getline(cin,str);
   firstUppercase(str);
  return 0;
}