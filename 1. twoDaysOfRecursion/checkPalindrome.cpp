#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str,int start,int end)
{
   if(start>=end)
      return true;
   return ((str[start]==str[end]) && checkPalindrome(str,start+1,end-1));
}
int main(){
   string str;
   getline(cin,str);
   int start=0;
   int end=str.length()-1;
   cout<<checkPalindrome(str,start,end);
  return 0;
}