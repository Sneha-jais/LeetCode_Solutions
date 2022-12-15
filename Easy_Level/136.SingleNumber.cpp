/* Leetcode link: https://leetcode.com/problems/single-number/description/
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
Input: nums = [2,2,1]
Output: 1
Input: nums = [4,1,2,1,2]
Output: 4
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0,i=0;
        int n=nums.size();
   sort(nums.begin(), nums.end());
if(n==1){
    return nums[i];
}

     while(i<n){

         if(nums[i]!=nums[i+1]){
                 ans=nums[i];
                break;
         }  
         i+=2; 
        }

return ans;
    }
};
