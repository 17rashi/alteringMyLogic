//https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=0;
        int col=0;
        int rowEnd=matrix.size()-1;
        int colEnd=matrix[0].size()-1;
		//This while loop reverse the matrix 
        while(row<=rowEnd){
            while(col<=colEnd){
                swap(matrix[row][col],matrix[rowEnd][col]);
                col++;
            }
            row++;
            rowEnd--;
            col=0;
        }
        int i=0,j=0;
        int lastRow=matrix.size()-1;
        int lastCol=matrix[0].size()-1;
		//to tranpose the matrix we use these for loop
        for(int i=0;i<=lastRow;i++){
            for(int j=i+1;j<=lastCol;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};