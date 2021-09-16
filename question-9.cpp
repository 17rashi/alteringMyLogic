#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
   int n;
   cin>>n;
   cin.ignore();
   string str;
   getline(cin,str);
   int count=0,counter=0;
   for(int i=0;i<n;i++)
   {
      if(str[i]=='A')
         count++;
      else if(str[i]=='D')
         counter++;
   }
   if(count>counter)
   {
      cout<<"Anton"<<endl;
   }
   else if(count<counter)
   {
      cout<<"Danik"<<endl;
   }
   else{
      cout<<"Friendship"<<endl;
   }
  return 0;
}