

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maximum=INT_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            maximum=max(sum,maximum);
            if(sum<0)
            sum=0;
        }
        return maximum;
    }
};


