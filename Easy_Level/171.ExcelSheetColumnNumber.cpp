

class Solution {
public:
    int titleToNumber(string ct) {
 int ans = 0;
    for (const auto& c : ct)
    {
        ans *= 26;
        ans += c  - 'A' + 1;
    }
 
    return ans;
    }
};
