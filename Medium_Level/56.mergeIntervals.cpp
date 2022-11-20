

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
