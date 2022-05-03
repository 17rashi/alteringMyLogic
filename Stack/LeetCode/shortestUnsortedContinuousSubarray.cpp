class Solution {
public:
    int nextSmaller(vector<int> nums){
        stack<int> s;
        int val=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            while(!s.empty() && nums[s.top()]>=nums[i]){
                s.pop();
            }
            if(!s.empty()){
                val=min(i,val);
            }
            s.push(i);
        }
        return val;
    }
    int prevGreater(vector<int> nums){
        stack<int> s;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            while(!s.empty() && nums[s.top()]<=nums[i]){
                s.pop();
            }
            if(!s.empty()){
                ans=i;
            }
            s.push(i);
        }
        return ans;
    }
    int findUnsortedSubarray(vector<int>& nums) {
        int m=nextSmaller(nums);
        int n=prevGreater(nums);
        if(m==nums.size()-1){
            return 0;
        }
        return (n-m)+1;
    }
};