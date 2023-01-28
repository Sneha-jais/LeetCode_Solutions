

class Solution {
public:
    string reverseOnlyLetters(string s) {
       int n=s.size();
        int l=0,r=n-1;
       while(l<r){
           if(isalpha(s[l]) && isalpha(s[r])){
           swap(s[l],s[r]);
           l++;
           r--;
           }
           else if(!isalpha(s[l]) && isalpha(s[r])){
                 l++;
           }
           else if(isalpha(s[l]) && !isalpha(s[r])){
                r--;
            
           }
           else{
               l++;
               r--;
           }
       }
return s;
    }
};
