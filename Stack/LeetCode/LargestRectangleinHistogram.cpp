#include<bits/stdc++.h>
#include<stack>
using namespace std;

/*
int getMaxArea(vector<int> arr){
   int res=0;
   int n=arr.size();
   for(int i=0;i<n;i++){
      int curr=arr[i];
      for(int j=i-1;j>=0;j--){
         if(arr[j]>=arr[i]){
            curr+=arr[i];
         }
         else{
            break;
         }
      }
      for(int j=i+1;j<n;j++){
         if(arr[j]>=arr[i]){
            curr+=arr[i];
         }
         else{
            break;
         }
      }
      res=max(res,curr);
   }
   return res;
}*/

vector<int> prevSmaller(vector<int> arr){
   vector<int> ans;
   stack<int> s;
   ans.push_back(-1);
   s.push(-1);
   s.push(0);
   for(int i=1;i<arr.size();i++){
      while(s.top()!=-1 && arr[s.top()]>=arr[i]){
         s.pop();
      }
      ans.push_back(s.top());
      s.push(i);
   }
   return ans;
}

vector<int> nextSmaller(vector<int> arr){
   vector<int> ans;
   stack<int> s;
   s.push(-1);
   for(int i=arr.size()-1;i>=0;i--){
      while(s.top()!=-1 && arr[s.top()]>arr[i]){
         s.pop();
      }
      if(s.top()==-1){
         ans.push_back(arr.size());
      }
      else{
         ans.push_back(s.top());
      }
      s.push(i);
   }
   reverse(ans.begin(),ans.end());
   return ans;
}

int getMaxArea(vector<int> arr){
   vector<int> prev;
   prev=prevSmaller(arr);

   for(int i=0;i<prev.size();i++){
      cout<<prev[i]<<" ";
   }

   vector<int> next;
   next=nextSmaller(arr);

   // for(int i=0;i<next.size();i++){
   //    cout<<next[i]<<" ";
   // }

   int maxVal=0;
   for(int i=0;i<arr.size();i++){
      int res=next[i]-prev[i]-1;
      maxVal=max(maxVal,res*arr[i]);
   }
   return maxVal;

}
int main(){
   int n;
   cin>>n;
   vector<int> arr;
   for(int i=0;i<n;i++){
      int a;
      cin>>a;
      arr.push_back(a);
   }
   cout<<getMaxArea(arr);
  return 0;
}