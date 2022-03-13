//https://leetcode.com/problems/power-of-three/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        else if(n==0){
            return false;
        }
        if(n%3==0){
            return isPowerOfThree(n/3);
        }
        else{
            return false;
        }
        return false;
    }
};