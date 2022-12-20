

class Solution 
{
public:
    int romanToInt(string s) {
         int n=s.length();
         int num = 0, prev=0;
        
        for(int i=n-1; i>=0; i--) {
            
            int val = getIntVal(s.at(i));
            num += prev > val ? -val : val;
            prev = val;

        }
        return num;
    }
    

     int getIntVal(char c){
        switch(c){
            case 'I': 
            return 1;
            case 'V': 
            return 5;
            case 'X': 
            return 10;
            case 'L': 
            return 50;
            case 'C': 
            return 100;
            case 'D': 
            return 500;
            default : 
            return 1000;
        }
           }
    
};
