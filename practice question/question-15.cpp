#include<bits/stdc++.h>
using namespace std;
void ultraFastMathematician(string str1,string str2)
{
   if(str1.length()==str2.length())
   for(int i=0;i<str1.length();i++)
   {
      if(str1[i]==str2[i])
         cout<<0;
      else
         cout<<1;
   }
}
using namespace std;
int main(){
   string str1;
   string str2;
   getline(cin,str1);
   getline(cin,str2);
   ultraFastMathematician(str1,str2);

  return 0;
}