

class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        sort(s.begin(),s.end());
        int count=0;
        int i=0;
       while(i<n){
            if(s[i]==s[i+1]){
                count++;
                i=i+2;
            }
            else{
                i++;
            }
        }
if(n%2==0 && count==n/2){
    return 2*count;
}
        return 2*count+1;
    }
};
