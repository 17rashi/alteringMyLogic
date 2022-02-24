//https://leetcode.com/problems/reach-a-number/

class Solution {
public:
    int reachNumber(int target) {
        target=abs(target);
        int k=1;
        while(target>0||target%2!=0){
            target-=k;
            k++;
        }
        return k-1;
    }
};