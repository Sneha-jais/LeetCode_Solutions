


class Solution{
public:
    int findMinArrowShots(vector<vector<int>>& points) {        
        sort(points.begin(),points.end());
        int minimum=points[0][1],c=1;
        for(int i=1;i<points.size();i++)
        {
            if(minimum<points[i][0])
            {
                c++;
                minimum=points[i][1];
            }
           minimum = min(points[i][1],minimum);
       
        }
        return c; 
    }
};
