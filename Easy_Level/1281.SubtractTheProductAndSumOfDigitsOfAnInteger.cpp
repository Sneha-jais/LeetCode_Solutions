/* Leetcode link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 
 Input: n = 234
 
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
 */

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;

        while(n>0){
            int lastdig=n%10;
            sum+=lastdig;
            product*=lastdig;
            n=n/10;
        }
        return (product-sum);
    }
};
