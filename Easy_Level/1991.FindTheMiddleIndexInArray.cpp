/* Leetcode link:
Given a 0-indexed integer array nums, find the leftmost middleIndex (i.e., the smallest amongst all the possible ones).
A middleIndex is an index where nums[0] + nums[1] + ... + nums[middleIndex-1] == nums[middleIndex+1] + nums[middleIndex+2] + ... + nums[nums.length-1].
If middleIndex == 0, the left side sum is considered to be 0. Similarly, if middleIndex == nums.length - 1, the right side sum is considered to be 0.
Return the leftmost middleIndex that satisfies the condition, or -1 if there is no such index.
Example 1:
Input: nums = [2,3,-1,8,4]
Output: 3
Explanation: The sum of the numbers before index 3 is: 2 + 3 + -1 = 4
The sum of the numbers after index 3 is: 4 = 4

*/

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {

           int n=nums.size();
        
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }        
        for(int i=0;i<n;i++){

            int x=(i!=0)?nums[i-1]:0;
            int y=nums[n-1]-nums[i];

            if(x==y)
            return i;
        }
        
        return -1;
    }
};
