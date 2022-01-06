//https://leetcode.com/problems/max-consecutive-ones/

/*
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,res=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
           count++;
           }
          else{
           count=0;
           continue;
        }
      res=max(res,count);
   }
   return res;
 }
};
*/