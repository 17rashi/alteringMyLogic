//https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                count++;
                if(i>=2 && nums[i]<=nums[i-2]){
                    nums[i]=nums[i-1];
                }
            }
        }
        cout<<count;
        return count<=1;
    }
};