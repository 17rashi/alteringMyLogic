#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string str,int start,int end){
   if(start>=end){
      return true;
   }
   return (str[start]==str[end]&&ispalindrome(str,start+1,end-1));
}
int main(){
   string str;
   cin>>str;
   int start=0;
   int end=str.length()-1;
   cout<<ispalindrome(str,start,end);
  return 0;
}