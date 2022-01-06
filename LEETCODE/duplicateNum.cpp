//https://leetcode.com/problems/find-the-duplicate-number/

/*

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return -1;
    }
};

*/