

class Solution {
public:
    int maxPower(string s) {
        
        int n=s.size();
int count=1;
int count1=INT_MIN;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                count1=max(count,count1);
                count=1;
            }
        }

       count1=max(count,count1);
return count1;
    }
};
