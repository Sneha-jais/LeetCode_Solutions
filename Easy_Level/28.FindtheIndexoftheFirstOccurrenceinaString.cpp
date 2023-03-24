/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.

*/

class Solution {
public:
    int strStr(string h, string ne) {
        
 int m=h.size();
 int n=ne.size();

 if(n>m){
     return -1;
 }

bool flag=false;
 for(int i=0;i<m;i++){
    if (h.substr(i, n) ==ne)
        return i;
 }

return -1;

    }
};
