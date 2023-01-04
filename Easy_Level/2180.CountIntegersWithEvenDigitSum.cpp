

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
