/*
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long sum=0;
        while(x>0){
            int last_digit=x%10;
            sum=(sum*10)+last_digit;
            x=x/10;
        }
        if(sum==temp){
            return true;
        }
        else
        return false;
    }
};

