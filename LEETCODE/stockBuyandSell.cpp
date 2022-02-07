//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& nums) {
       int min_el=nums[0],max_el=0,first=0,sec=0,res=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<min_el){
                first=i;
                min_el=nums[i];
            }
            if(nums[i]>max_el){
                max_el=nums[i];
                sec=i;
            }
            if(first<sec){
                res=max(res,max_el-min_el);
            }
            max_el=0;
        }
        return res;
    }
};
