//https://leetcode.com/problems/count-nice-pairs-in-an-array/

class Solution {
public:
    int rev(int n){
        int ans=0;
        while(n>0){
            int rem=n%10;
            ans=ans*10+rem;
            n=n/10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        long long int count=0;
        long int M=1000000007;
        vector<int> v;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]-rev(nums[i]));
        }
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
            count=(count+(mp[v[i]]-1))%M;
        }
       return (long)count;
    }
};