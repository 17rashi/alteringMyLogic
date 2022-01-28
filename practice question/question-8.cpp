#include<bits/stdc++.h>
using namespace std;
int main(){
   string str1,str2;
   getline(cin,str1);
   getline(cin,str2);
   string s2;
   s2=str1;
   reverse(s2.begin(),s2.end());
   if(str2==s2)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;

  return 0;
}