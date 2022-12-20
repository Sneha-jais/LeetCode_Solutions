/* Leetcode link: https://leetcode.com/problems/excel-sheet-column-number/description/
Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.
For example:
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...

Input: columnTitle = "AB"
Output: 28

Input: columnTitle = "ZY"
Output: 701
*/

class Solution {
public:
    int titleToNumber(string ct) {
 int ans = 0;
    for (const auto& c : ct)
    {
        ans *= 26;
        ans += c  - 'A' + 1;
    }
 
    return ans;
    }
};
