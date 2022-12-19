/*Leetcode link: https://leetcode.com/problems/excel-sheet-column-title/description/

Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.
For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...

Input: columnNumber = 28
Output: "AB"
*/


class Solution {
public:
    string convertToTitle(int cn) {
   if(cn == 0)
   return  "";
   else
   return convertToTitle((cn - 1) / 26) + (char)('A' + ((cn - 1) % 26));
    }
};
