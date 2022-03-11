//https://leetcode.com/problems/stone-game/

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int i=0,j=piles.size()-1;
        long long int alice=0,bobs=0;
        while(i<j){
            if(piles[i]>piles[j]){
                alice+=piles[i];
                bobs+=piles[j];
            }
            else{
                bobs+=piles[i];
                alice+=piles[j];
            }
            i++;
            j--;
        }
        return alice>bobs;
    }
};