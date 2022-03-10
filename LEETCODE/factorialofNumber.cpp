//https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution {
public:
    int trailingZeroes(int n) {
        int k=0;
        for(int i=5;n/i>=1;i=i*5){
            k+=n/i;
        }
        return k;
    }
};