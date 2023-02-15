/*  Leetcode link: https://leetcode.com/problems/xor-operation-in-an-array/description/
You are given an integer n and an integer start.
Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.
Return the bitwise XOR of all elements of nums.
Input: n = 5, start = 0
Output: 8
Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where "^" corresponds to bitwise XOR operator

*/

class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n],ans=0;
        for(int i=0;i<n;i++){
            arr[i] = start + 2 * i;
        }
        for(int i=0;i<n;i++){
            ans^=arr[i];
        }
        return ans;
    }
};
