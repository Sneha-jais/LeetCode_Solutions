/* Leetcode Link:
Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.
Input: s = "Hello"
Output: "hello"
 Input: s = "LOVELY"
Output: "lovely"
*/

class Solution {
public:
    string toLowerCase(string s) {
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            s[i]=tolower(s[i]);
        }
        return s;
    }
};
