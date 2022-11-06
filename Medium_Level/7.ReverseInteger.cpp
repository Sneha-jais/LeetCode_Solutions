/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
Input: x = 123
Output: 321
Input: x = 120
Output: 21
*/

class Solution {
public:
    int reverse(int x) {
 long ans = 0;
        while (x != 0) {
          long lastDig=x%10;
            ans = 10 * ans + lastDig;
            x /= 10;
        }
        if(ans<=INT_MAX && ans>=INT_MIN)
        return ans;
        else
        return 0;


    }
};
