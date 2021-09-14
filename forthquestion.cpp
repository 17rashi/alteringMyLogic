#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
   string s1,s2;
   cin>>s1>>s2;
   transform(s1.begin(),s1.end(),s1.begin(),::tolower);
   transform(s2.begin(),s2.end(),s2.begin(),::tolower);
   int sum1=0,sum2=0;
   for(int i='a'||'A';i<s1.length();i++)
   {
      sum1+=s1[i];
   }
   for(int i='a'||'A';i<s2.length();i++)
   {
      sum2+=s2[i];
   }
   cout<<sum1<<endl<<sum2<<endl;
   sort(s1.begin(),s1.end());
   sort(s2.begin(),s2.end());
   cout<<endl<<s1<<endl<<s2<<endl;
   if(s1!=s2 && (sum1==sum2))
      cout<<1<<endl;
   else if(sum1<sum2)
      cout<<"-1"<<endl;
   else if(sum1>sum2)
      cout<<"1"<<endl;
   else if(sum1==sum2)
      cout<<"0"<<endl;
  return 0;
}