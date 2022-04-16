#include<bits/stdc++.h>
#include<stack>
using namespace std;
vector<int> PrevGreater(int arr[],int n){
   stack<int> st;
   st.push(-1);
   st.push(arr[0]);
   vector<int> ans;
   ans.push_back(-1);
   for(int i=1;i<n;i++){
      while(st.top()!= -1 && st.top()<arr[i]){
         st.pop();
      }
      ans.push_back(st.top());
      st.push(arr[i]);
   }
   return ans;
}
int main(){
   int n;
   cin>>n;
   int arr[1000];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   vector<int> ans=PrevGreater(arr,n);
   for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
   }

  return 0;
}