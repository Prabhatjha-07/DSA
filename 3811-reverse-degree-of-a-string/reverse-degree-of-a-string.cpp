class Solution {
public:
    int reverseDegree(string s) {

        int ans = 0;
        int pos = 1;

        for (char i : s) {
            char ch = i;
            int digit = 'z' - ch + 1;

            ans += digit * pos;
            pos++;
        }
        return ans;
    }
};