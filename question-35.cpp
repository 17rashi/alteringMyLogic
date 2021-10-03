#include<bits/stdc++.h>
using namespace std;
void check(string str,string w)
{
   int count=0;
   for(int i=0;i<w.length();i++)
   {
      for(int j=0;j<str.length();j++)
      {
         if(w[i]==str[j])
            count++;
      }
   }
   if(count==w.length())
      cout<<"Yes"<<endl;
   else
      cout<<"No"<<endl;
}
int main(){
   string str,w;
   cin>>str;
   int n;
   cin>>n;
   cin.ignore();
   while(n--)
   {
      getline(cin,w);
      check(str,w);
   }
  return 0;
}
