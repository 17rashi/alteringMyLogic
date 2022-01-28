//https://www.codechef.com/problems/LCH15JAB

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int max=0;
    for(int i=0;i<s.length();i++)
    {
      int count=0;
      for(int j=0;j<s.length();j++)
      {
        if(s[i]==s[j])
        {
          count++;
        }
      }
      if(count>max)
      {
        max=count;
      }
    }
      if(s.length()%2==0)
      {
        if(max==s.length()-max)
        {
          cout<<"YES"<<endl;
        }
        else
        {
          cout<<"NO"<<endl;
        } 
      }
      else
      {
        cout<<"NO"<<endl;
      } 
  }
  return 0;
}