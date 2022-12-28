


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
