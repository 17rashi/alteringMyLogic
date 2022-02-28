//https://leetcode.com/problems/guess-number-higher-or-lower/

/*
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int i=0, num=n;
        int mid=i+(num-i)/2;
        while(i<num){
            if(guess(mid)==-1){
                num=mid-1;
            }
            else if(guess(mid)==1){
                i=mid+1;
            }
            else{
                return mid;
            }
            mid=i+(num-i)/2;
        }
        return mid;
    }
};