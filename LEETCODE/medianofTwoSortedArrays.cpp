//https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        double res;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int final1=(0+ans.size()-1)/2;
        if((ans.size()-1)%2==0){
            res=ans[final1];
        }
        else{
            double m=(ans[(ans.size())/2]+ans[(ans.size()-1)/2]);
            res=m/2;
        }
        return res;
    }
};