/* Leetcode link: https://leetcode.com/problems/count-integers-with-even-digit-sum/description/
Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.
The digit sum of a positive integer is the sum of all its digits.
Example 1:
Input: num = 4
Output: 2
Explanation:
The only integers less than or equal to 4 whose digit sums are even are 2 and 4.    
*/

class Solution {
public:
int sumDig(int n){
int sum=0;
while(n>0){
    int lastdig=n%10;
    sum+=lastdig;
    n/=10;
}
return sum;
}
    int countEven(int num) {
    int count=0;
    
   int i=2;

while(i<=num){
if((sumDig(i))%2==0){
    count++;

}
i++;
}
return count;
    }
};
