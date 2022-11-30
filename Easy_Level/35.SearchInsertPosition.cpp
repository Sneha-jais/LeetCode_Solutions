/*
Leetode link: https://leetcode.com/problems/search-insert-position/description/

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
Input: nums = [1,3,5,6], target = 5
Output: 2
Input: nums = [1,3,5,6], target = 2
Output: 1
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
int n=nums.size();
int low=0,high=n-1,mid;
while(low<=high){
    mid=(low+high)/2;
     if(nums[mid] == target){
                return mid ;
            }
     else if(nums[mid] > target){
                high= mid -1 ;
            }
            else{
                low= mid + 1 ;
            }
}
        
//low is the position where target(if it is not found) can be put
        
 return low;       
    }
};
