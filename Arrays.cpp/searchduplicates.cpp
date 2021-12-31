//https://leetcode.com/problems/find-the-duplicate-number/

#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return -1;
}
int main(){
    vector<int> nums{2,5,9,6,9,3,8,9,7,1};
    cout<<findDuplicate(nums);
}