//https://codeforces.com/problemset/problem/581/A
#include<bits/stdc++.h>
using namespace std;
int main(){
   int R,B,sum=0;
   cin>>R>>B;
   cout<<min(R,B)<<" ";
   if(R>B)
      sum=R-B;
   else
      sum=B-R;  
   int ans=sum/2;
   cout<<ans<<endl;
  return 0;
}