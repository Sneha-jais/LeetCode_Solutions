/* Leetcode link: https://leetcode.com/problems/rotate-array/
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();

k=k%n;
vector <int> v (nums);
int temp;
          for(int i=0;i<n;i++){
                nums[(i+k)%n]=v[i];
           }
        

    }
};
