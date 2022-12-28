/*
Given a positive integer n, find the pivot integer x such that:
The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
Return the pivot integer x. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.

Input: n = 8
Output: 6
Explanation: 6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.
*/


class Solution {
public:
    int sum(int a,int b){
        int n=b-a+1;
        int total=n*(a+b)/2;
        return total;
    }

    int pivotInteger(int n) {
     if(n==1)
        return 1;   
    

        for(int i=1;i<n;i++){
        if(sum(1,i)==sum(i,n)){
            return i;
        }
    }
  
    return -1;
      }
};
