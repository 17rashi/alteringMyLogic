//https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int before=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            sum=sum-nums[i];
            int n_b=i;
            int n_a=n-i-1;
            int val=sum-(n_a*nums[i]);
            val+=nums[i]*n_b-before;
            ans.push_back(val);
            before+=nums[i];
        }
        return ans;
    }
};