/* Leetcode link: https://leetcode.com/problems/transpose-matrix/description/
Given a 2D integer array matrix, return the transpose of matrix.
The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
 vector<vector<int>> ans(matrix[0].size(), vector<int>(matrix.size()));

    for (int i = 0; i < matrix.size(); ++i)
      for (int j = 0; j < matrix[0].size(); ++j)
        ans[j][i] = matrix[i][j];

    return ans;
    }
};
