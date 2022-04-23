#include<bits/stdc++.h>
#include<stack>
using namespace std;
vector<int> nextGreater(int arr[],int n){
   vector<int> ans;
   stack<int> s;
   s.push(-1);
   s.push(arr[n-1]);
   ans.push_back(-1);
   for(int i=n-2;i>=0;i--){
      while(s.top()!=-1 && s.top()>arr[i]){
         s.pop();
      }
      ans.push_back(s.top());
      s.push(arr[i]);
   }
   reverse(ans.begin(),ans.end());
   return ans;
}
int main(){
   int n;
   cin>>n;
   int arr[1000];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   vector<int> ans=nextGreater(arr,n);
   for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
   }

  return 0;
}