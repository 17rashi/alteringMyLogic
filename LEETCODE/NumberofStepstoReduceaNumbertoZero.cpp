//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
/*
class Solution {
    int count=0;
public:
    int numberOfSteps(int num) {
    if(num==0){
      return count;
    }
    if(num%2==0){
        count++;
      return numberOfSteps(num/2);
    }
        count++;
      return numberOfSteps(num-1); 
    }
};

*/