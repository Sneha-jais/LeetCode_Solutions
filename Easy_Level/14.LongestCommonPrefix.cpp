

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string s="";
     
if (n==0){
return s;
}

string s1=strs[0];
string s2=strs[n-1];
        for(int i=0;i<s1.size();i++){

    if(s1[i]==s2[i]){
        s+=s1[i];
    }
    else{
        break;
    }
        }
        return s;
    }
};
