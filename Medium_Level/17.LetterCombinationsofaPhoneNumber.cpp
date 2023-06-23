/* Leetcode link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
	Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. 
 Return the answer in any order.
A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
*/


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
