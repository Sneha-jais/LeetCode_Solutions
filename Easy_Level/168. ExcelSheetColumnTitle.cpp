class Solution {
public:
    string convertToTitle(int cn) {
   if(cn == 0)
   return  "";
   else
   return convertToTitle((cn - 1) / 26) + (char)('A' + ((cn - 1) % 26));
    }
};
