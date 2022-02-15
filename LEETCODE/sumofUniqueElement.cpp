//https://leetcode.com/problems/sum-of-unique-elements/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        if(nums.size()==1){
            return nums[0];
        }
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1){
                sum+=nums[i];
            }
        }
        return sum;
    }
};