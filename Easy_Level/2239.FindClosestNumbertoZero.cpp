

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size();
int ans=INT_MAX,k=0;
        for(int i=0;i<n;i++){
          if(abs(nums[i])<abs(ans)){
              ans=nums[i];
              k=i;
          }
          else if(abs(nums[i])==abs(ans) && nums[i]!=nums[k]){
ans=abs(nums[i]);
          }
        }
        return ans;
    }
};
