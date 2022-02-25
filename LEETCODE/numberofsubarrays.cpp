//https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/

//1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int count=0;
        for(int i=k;i<arr.size();i++){
            if((sum/k)>=threshold){
                count++;
            }
            sum+=(arr[i]-arr[i-k]);            
        }
        if(sum/k>=threshold){
            count++;
        }
        return count;
    }
};