//https://mycode.prepbytes.com/problems/recursion/FRSTCAP

#include <bits/stdc++.h>
using namespace std;
int count(string str,int n){
   if(str.length()==0)
   {
     return -1;
   }
   if(!(str[0]>='A'&& str[0]<='Z')){
      n++;
      string ros=str.substr(1);
      return count(ros,n);
   }
   else
   {
      return n;
   }
   
}
int main()
{
  //write your code here
  int t;
  string str;
  cin>>t;
  while(t--)
  {
    cin>>str;
    cout<<count(str,0);
  }
  
  return 0;
}