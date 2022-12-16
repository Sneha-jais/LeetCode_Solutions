/* Leetcode link:
Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal 
substring
 consisting of non-space characters only.

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

*/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
         int i=n-1;
         int count=0;

while(i>=0 && s[i]==' ')
            i--;
        while(i>=0 && s[i] != ' '){
            count++;
           i--;
        }
    return count;
}
};
