/* Leetcode link: https://leetcode.com/problems/reverse-only-letters/description/
Given a string s, reverse the string according to the following rules:
All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.

Example 1:
Input: s = "ab-cd"
Output: "dc-ba"
*/

class Solution {
public:
    string reverseOnlyLetters(string s) {
       int n=s.size();
        int l=0,r=n-1;
       while(l<r){
           if(isalpha(s[l]) && isalpha(s[r])){
           swap(s[l],s[r]);
           l++;
           r--;
           }
           else if(!isalpha(s[l]) && isalpha(s[r])){
                 l++;
           }
           else if(isalpha(s[l]) && !isalpha(s[r])){
                r--;
            
           }
           else{
               l++;
               r--;
           }
       }
return s;
    }
};
