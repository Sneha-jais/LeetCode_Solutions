/* Leetcode link: https://leetcode.com/problems/pascals-triangle-ii/description/
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers
Input: rowIndex = 3
Output: [1,3,3,1]
Input: rowIndex = 0
Output: [1]
*/
class Solution {
 public:
  vector<int> getRow(int rowIndex) {

    vector<int> ans(rowIndex + 1, 1);

    for (int i = 2; i < rowIndex + 1; i++)
      for (int j = 1; j < i; j++)
        ans[i - j] += ans[i - j - 1];

    return ans;
  }
};
