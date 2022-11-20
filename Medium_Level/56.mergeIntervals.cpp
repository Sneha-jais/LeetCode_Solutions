/* Leetcode link:
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals,
and return an array of the non-overlapping intervals that cover all the intervals in the input.
Example 1:
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      
    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end());
    int m = intervals[0][0], n = intervals[0][1];
    for(auto it:intervals) 
    {
        if(it[0] <= n) 
        {
            n = max(n, it[1]);
        } 
        else 
        {
            res.push_back({m, n});
            m = it[0];
            n = it[1];
        }
    }
    res.push_back({m, n});
    return res;
}
    
};
