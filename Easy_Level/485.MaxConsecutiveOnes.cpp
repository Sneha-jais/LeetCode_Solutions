/* Leetcode link: 
Given a binary array nums, return the maximum number of consecutive 1's in the array.
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

int n=nums.size();
int count=0;
int count1=INT_MIN;

for(int i=0;i<n;i++){
    if(nums[i]==1){
        count++;
    }
    
    else{
        
        count=max(count,count1);
        count1=count;       
        count=0;
    }

}
count1=max(count,count1);    
return count1;

    }
};
