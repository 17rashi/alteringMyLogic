//https://leetcode.com/problems/power-of-two/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int ans=1;
        for(int i=0;i<=31;i++){
            if(ans==n){
                return true;
            }
            ans=pow(2,i);
        }
        return false;
    }
};