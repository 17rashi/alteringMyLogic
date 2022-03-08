//https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int count=0;
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> ans;
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;
        int total=row*col;
        while(count<total){
            for(int i=startingCol;i<=endingCol && count<total;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            
            for(int i=startingRow;i<=endingRow && count<total;i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            
            for(int i=endingCol;i>=startingCol && count<total;i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            for(int i=endingRow;i>=startingRow && count<total;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};