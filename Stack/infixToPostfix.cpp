#include<bits/stdc++.h>
using namespace std;
int prec(char ch){
    if(ch=='^'){
      return 4;
    }
    else if(ch=='*' || ch=='/'){
      return 2;
    }
    else if(ch=='+' || ch=='-'){
      return 1;
    }
    return -1;
}
int main(){
  string str;
  string ans;
  cin>>str;
  stack<int> s;
  for(int i=0;i<str.length();i++){
     if(str[i]>='a' && str[i]<='z'){
        ans.push_back(str[i]);
     }
     else{
        if(s.empty()){
           s.push(str[i]);
        }
        else{
          if(prec(str[i])>prec(s.top())){
            s.push(str[i]);
          }
          else{
            while(!s.empty() && prec(s.top())>=prec(str[i])){
              ans+=s.top();
              s.pop();
            }
            s.push(str[i]);
          }
        }
     }
  } 
  while(s.empty()==false){
    ans+=s.top();
    s.pop();
  }
  cout<<ans<<endl;
  return 0;
}
