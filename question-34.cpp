#include<bits/stdc++.h>
using namespace std;
int main(){
   string str;
   int count=0;
   getline(cin,str);
   sort(str.begin(),str.end());
   for(int i=0;i<str.length()-1;i++)
      {
         if(str[i]=='{' ||str[i]=='}' || str[i]==',' || str[i]==' ')
         {
            continue;
         }
         else if(str[i]!=str[i+1]){
            count++;
         }  
      }
   cout<<count<<endl;
  return 0;
}