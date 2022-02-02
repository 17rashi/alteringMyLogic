//https://leetcode.com/problems/rotate-array/submissions/

#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
   k = k%nums.size();
   reverse(nums.begin(), nums.end());
   reverse(nums.begin(), nums.begin()+k);
   reverse(nums.begin()+k, nums.end());
}
int main(){
   vector<int> nums={4,1,2,5,6};
   int d=3;
   rotate(nums,d);
   for(int i=0;i<nums.size();i++){
      cout<<nums[i]<<" ";
   }   
  return 0;
}