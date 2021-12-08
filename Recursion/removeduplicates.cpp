#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string S){
   if(S.length()==0)
   {
      return " ";
   } 
   char ch=S[0];
   string ans=removeDuplicates(S.substr(1)); 
   if(ch==ans[0])
   {
      return ans;
   }
   return ch+ans;
}
int main(){
   string S;
   getline(cin,S);
   cout<<removeDuplicates(S)<<endl;
  return 0;
}