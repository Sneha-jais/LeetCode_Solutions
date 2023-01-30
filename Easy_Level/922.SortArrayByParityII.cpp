/*
Given an array of integers nums, half of the integers in nums are odd, and the other half are even.
Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.
Return any answer array that satisfies this condition.
Example 1:
Input: nums = [4,2,5,7]
Output: [4,5,2,7]
Explanation: [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.
*/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
    int n=nums.size();

   for (int i = 0, j = 1; i < n; i += 2, j += 2) {
      while (i < n && nums[i] % 2 == 0)
        i += 2; //skip even
      while (j < n && nums[j] % 2 == 1)
        j += 2; //skip odd
      if (i < n)
        swap(nums[i], nums[j]);
    }
   return nums;
    }
};
