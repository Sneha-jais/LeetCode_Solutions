


class Solution {

 private:
 	vector<string> res;
 	string key[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

public:

void recursion(string s, string current, int index){
 		if(index == s.length()) res.emplace_back(current);
 		else{
 			string letters = key[s[index] - '0'];
 			for(const char c: letters){
 				recursion(s, current + c, index + 1);
 			}
 		}
}
    vector<string> letterCombinations(string digits) {

if(digits.empty()) //In case of empty
		return res;
recursion(digits, "", 0);
 		return res;

    }
};
