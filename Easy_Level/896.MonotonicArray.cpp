/* Leetcode link:
An array is monotonic if it is either monotone increasing or monotone decreasing.
An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].
Given an integer array nums, return true if the given array is monotonic, or false otherwise.
Input: nums = [6,5,4,4]
Output: true

Input: nums = [1,3,2]
Output: false
*/

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        int n=nums.size();
      bool inc=true;
      bool dec=true;

        for(int i=0;i<n-1;i++){
           if(nums[i]<nums[i+1]){
               dec=false;
           }
           if(nums[i]>nums[i+1]){
               inc=false;
           }
           if(!inc && !dec){
               return false;
           }
        }
return true;

    }
};
