/* Leetcode link: https://leetcode.com/problems/longest-palindrome/
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.
Letters are case sensitive, for example, "Aa" is not considered a palindrome here.
Example 1:
Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
*/

class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        sort(s.begin(),s.end());
        int count=0;
        int i=0;
       while(i<n){
            if(s[i]==s[i+1]){
                count++;
                i=i+2;
            }
            else{
                i++;
            }
        }
if(n%2==0 && count==n/2){
    return 2*count;
}
        return 2*count+1;
    }
};
