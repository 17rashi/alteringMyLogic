// LEETCODE PROBLEM

#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& nums) {
   for(int i=1;i<nums.size();i++){
      if(nums[i]!=nums[i-1]){
            return nums[i-1];
      }
      i++;
   }
   return nums[nums.size()-1];
}
int main(){
   vector<int> nums;
   int size;
   cin>>size;
   for(int i=0;i<size;i++){
      int a;
      cin>>a;
      nums.push_back(a);
   }
   cout<<singleNonDuplicate(nums);
  return 0;
}