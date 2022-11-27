

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
