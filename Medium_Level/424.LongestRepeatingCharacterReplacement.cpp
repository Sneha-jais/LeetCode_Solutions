/*
You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. 
You can perform this operation at most k times.
Return the length of the longest substring containing the same letter you can get after performing the above operations.
Example 1:
Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
*/



class Solution {
 public:
  int characterReplacement(string s, int k) {
    int ans = 0;
    int maxCount = 0;

    vector<int> c(128);

    for (int l = 0, r = 0; r < s.length(); ++r) {
      maxCount = max(maxCount, ++c[s[r]]);
      while (maxCount + k < r - l + 1)
        --c[s[l++]];
      ans = max(ans, r - l + 1);
    }

    return ans;
  }
};
