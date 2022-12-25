/* Leetcode link: https://leetcode.com/problems/ugly-number/description/
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.
Given an integer n, return true if n is an ugly number.
Example 1:
Input: n = 6
Output: true
Explanation: 6 = 2 × 3

*/


class Solution {
public:
    bool isUgly(int n) {
        if(n==1)
        return true;
          if(n==0)
        return false;
      
        if (n % 2 == 0)
        return isUgly(n / 2);
    if (n % 3 == 0)
        return isUgly(n / 3);
    if (n % 5 == 0)
        return isUgly(n / 5);
 
  
    return false;
    }
};
