


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
            int sum = accumulate(begin(nums), end(nums), 0);
            int temp = 0;

      for (int i = 0; i < nums.size(); ++i) {
      if (temp == sum - temp - nums[i])
        return i;
      temp += nums[i];
    }

    return -1;

    }
};
