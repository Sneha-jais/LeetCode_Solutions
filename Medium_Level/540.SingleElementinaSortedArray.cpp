/* Leetcode Link: https://leetcode.com/problems/single-element-in-a-sorted-array/
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.
Example 1:
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2

*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n=nums.size();
int ans=0;
if(n==1){
    return nums[0];
}
for(int i=0;i<n;i+=2){
if(nums[i]!=nums[i+1]){
    ans=nums[i];
    break;
}
}
return ans;


    }
};
