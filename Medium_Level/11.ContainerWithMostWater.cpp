
/* Leetcode link: https://leetcode.com/problems/container-with-most-water/description/
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

*/

class Solution {
public:
    int maxArea(vector<int>& height) {
     int n=height.size();

int l=0,h=n-1;
int ans=INT_MIN;
while(l<h){


int min1=min(height[l],height[h]);
int area=min1*(h-l);
if(min1==height[l]){
    l++;
}
else{
    h--;
}
ans=max(ans,area);


}

return ans;

    }
};
