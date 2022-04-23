#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreater(vector<int> arr){
   stack<int> S;
   vector<int> ans;
   S.push(-1);
   for(int i=0;i<arr.size();i++){
      if(S.top()==-1){
         ans.push_back(S.top());
      }
      else{
         while(S.top()!=-1 && S.top()<arr[i]){
            S.pop();
         }
         ans.push_back(S.top());
      }
      S.push(arr[i]);
   }
   return ans;
}
int main(){
   int n;
   cin>>n;
   vector<int> a;
   for(int i=0;i<n;i++){
      int e;
      cin>>e;
      a.push_back(e);
   }
   vector<int> ans=nextGreater(a);
   for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
   }
  return 0;
}