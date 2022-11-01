/* Leetcode link: https://leetcode.com/problems/valid-parentheses/description/

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.
 Input: s = "()[]{}"
Output: true
Input: s = "(]"
Output: false

*/

class Solution {
public:
    bool isValid(string s) {
        stack <char> stk; 
        char x;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                stk.push(s[i]);
                continue;
            }
            if(stk.empty()){
                return false;
            }
            switch(s[i]){
                case ')':
                x=stk.top();
                stk.pop();
                if(x=='{'||x=='[')
                return false;
                break;
                  case '}':
                x=stk.top();
                stk.pop();
                if(x=='('||x=='[')
                return false;
                break;
                  case ']':
                x=stk.top();
                stk.pop();
                if(x=='{'||x=='(')
                return false;
                break;
            }
        }
        return (stk.empty());
    }
};
