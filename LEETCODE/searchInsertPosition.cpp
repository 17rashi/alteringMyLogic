//https://leetcode.com/problems/search-insert-position/

/*
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]>target){
                return count;
            }
            else if(nums[i]!=target){
                count++;
            }
        }
        return nums.size();
    }
};

*/