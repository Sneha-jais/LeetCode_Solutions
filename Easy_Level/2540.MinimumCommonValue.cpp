/* Leetcode link: https://leetcode.com/problems/minimum-common-value/description/
Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the minimum integer common to both arrays. 
If there is no common integer amongst nums1 and nums2, return -1.
Note that an integer is said to be common to nums1 and nums2 if both arrays have at least one occurrence of that integer.
Example 1:
Input: nums1 = [1,2,3], nums2 = [2,4]
Output: 2
Explanation: The smallest element common to both arrays is 2, so we return 2.
*/

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int n1=nums1.size(),n2=nums2.size();
        int i=0,j=0;

        while(i<n1 && j<n2)
        {
            if(nums1[i]==nums2[j])
                return nums1[i];
            else if(nums1[i]<nums2[j])
                i++;
            else
                j++;
                
        }
        return -1;
    }
};
