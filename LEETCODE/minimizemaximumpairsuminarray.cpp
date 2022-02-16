//https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/submissions/

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int first=0,last=nums.size()-1,sum=0;
        while(first<last){
            sum=nums[first]+nums[last];
            ans.push_back(sum);
            sum=0;
            first++;
            last--;
        }
        return *max_element(ans.begin(),ans.end());
    }
};