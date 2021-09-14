#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
   string s1;
   cin>>s1;
   int count=1;
   sort(s1.begin(),s1.end());
   cout<<s1<<endl;
   for(int i=1;i<s1.length();i++)
   {
      if(s1[i]!=s1[i-1])
         count++;
      cout<<count<<endl;
   }
   if(count%2==0)
      cout<<"CHAT WITH HER!"<<endl;
   else
      cout<<"IGNORE HIM!"<<endl;
  return 0;
}