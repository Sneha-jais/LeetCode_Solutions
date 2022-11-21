/*
Leetcode link: https://leetcode.com/problems/set-matrix-zeroes/description/
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

*/

class Solution {
public:
   
    void setZeroes(vector<vector<int>>& matrix) {

        int row=matrix.size(),col=matrix[0].size();
        int col0=1;
        
            for(int i=0;i<row;i++){
            if(matrix[i][0]==0)
                col0=0;
                 for(int j=1;j<col;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                     matrix[0][j]=0;
                    }             
                 }                      
        }
        
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>0;j--){
                if(matrix[0][j]==0 || matrix[i][0]==0)
                    matrix[i][j]=0;
              
            }
            if(col0==0)
                matrix[i][0]=0;
        }
    }
};
