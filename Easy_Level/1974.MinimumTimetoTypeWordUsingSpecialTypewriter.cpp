/* Leetcode link: https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/description/
There is a special typewriter with lowercase English letters 'a' to 'z' arranged in a circle with a pointer. 
A character can only be typed if the pointer is pointing to that character. The pointer is initially pointing to the character 'a'.
Input: word = "abc"
Output: 5
Explanation: 
The characters are printed as follows:
- Type the character 'a' in 1 second since the pointer is initially on 'a'.
- Move the pointer clockwise to 'b' in 1 second.
- Type the character 'b' in 1 second.
- Move the pointer clockwise to 'c' in 1 second.
- Type the character 'c' in 1 second.
*/

class Solution {
public:
    int minTimeToType(string w) {
        int n=w.size();
        int ans = 0;
        char temp = 'a';
        for (int i=0;i<n;i++) {
           ans += min(abs(w[i] - temp), 26 - abs(w[i] - temp)) + 1;
            temp = w[i];
        }
        return ans;
    }
};
