
/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.


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
