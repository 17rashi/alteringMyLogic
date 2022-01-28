#include<bits/stdc++.h>
using namespace std;
bool check(string X,string Y)
{
   for(int i=0;i<X.length();i++)
   {
      if(X[i]!=Y[i] && (X[i]!='?' && Y[i]!='?'))
         return false;
   }
   return true;
}
int main(){
   int n;
   cin>>n;
   while(n--)
   {
      string X,Y;
      cin>>X>>Y;
      if(check(X,Y))
      {
         cout<<"Yes"<<endl;
      }
      else
      {
         cout<<"No"<<endl;
      }
      
   }
   
  return 0;
}