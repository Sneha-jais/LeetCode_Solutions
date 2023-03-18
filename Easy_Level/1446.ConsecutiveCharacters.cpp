/* Leetcode link: https://leetcode.com/problems/consecutive-characters/
The power of the string is the maximum length of a non-empty substring that contains only one unique character.
Given a string s, return the power of s.
Example 1:
Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.
*/

class Solution {
public:
    int maxPower(string s) {
        
        int n=s.size();
int count=1;
int count1=INT_MIN;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                count1=max(count,count1);
                count=1;
            }
        }

       count1=max(count,count1);
return count1;
    }
};
