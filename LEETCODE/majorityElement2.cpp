//https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        vector<int> res;
        int n=nums.size()/3;
        unordered_map<int, int> mp;
        int max_val=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        sort(nums.begin(),nums.end());
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<ans.size();i++){
            if(mp[ans[i]]>n){
                res.push_back(ans[i]);
            }
        }
        return res;
    }
};