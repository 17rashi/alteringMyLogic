#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int count=0;
  vector<string> res;
  string ans[] ={"zero","one","two","three","four","five","six","seven","eight","nine"};
  while(n>0){
      int rem = n%10;
      res.push_back(ans[rem]);
      n=n/10;
      count++;
  }
  reverse(res.begin(),res.end());
  for(int i=0;i<count;i++){
     cout<<res[i]<<" ";
  }
  return 0;
}