


class Solution {
public:
    bool divideArray(vector<int>& nums) {

        sort(nums.begin(),nums.end());
int n=nums.size();

        for(int i=0;i<n;i+=2){
            if(nums[i]==nums[i+1]){
               
                continue;
            }
            else{
                return false;
                break;
            }
        }
        return true;


    }
};
