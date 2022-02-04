//https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/

#include<bits/stdc++.h>
using namespace std;
int rangeSum(vector<int>& nums, int n, int left, int right) {
   int M = 1000000007;
   vector<int> v;
   for(int i=0;i<n;i++){
      int sum=nums[i];
      v.push_back(nums[i]);
      for(int j=i+1;j<n;j++){
            sum+=nums[j];
            v.push_back(sum);
      }
      sum=0;
   }
   long long int ans=0;
   sort(v.begin(),v.end());
   for(int m=(left-1);m<right;m++){
      ans=(ans+v[m])%M;
   }
   return ans;
}
int main(){
  int n;
  cin>>n;
  vector<int> nums;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    nums.push_back(a);
  }
  int left,right;
  cin>>left>>right;
  cout<<rangeSum(nums,n,left,right)<<endl;
}