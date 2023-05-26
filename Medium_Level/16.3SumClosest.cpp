/* Leetcode link: https://leetcode.com/problems/3sum-closest/
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
Return the sum of the three integers.
You may assume that each input would have exactly one solution.
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum2=0;
        int diff=INT_MAX;
        
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
             while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) { 
                    return sum;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
                if (abs(sum - target) < diff){
                    sum2=sum;
                                    diff = abs(sum-target);
                }
    
             }

        }
return sum2;

    }
};
