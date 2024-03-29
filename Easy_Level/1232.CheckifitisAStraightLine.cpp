/* Leetcode link: https://leetcode.com/problems/check-if-it-is-a-straight-line/
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. 
Check if these points make a straight line in the XY plane.
Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true
Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
*/

class Solution {

public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

int x1 = coordinates[0][0];
    int y1 = coordinates[0][1];
    int x2 = coordinates[1][0];
    int y2 = coordinates[1][1];
    int dx = x2 - x1;
    int dy = y2 - y1;

    for (int i = 2; i < coordinates.size(); i++) {
      int x = coordinates[i][0];
      int y = coordinates[i][1];
      if ((x - x1) * dy != (y - y1) * dx)
        return false;
    }
    return true;

    }
};
