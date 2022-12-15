

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
