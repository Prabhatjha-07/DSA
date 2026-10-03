class Solution {
public:
    int longestValidParentheses(string s) {
        int open = 0;
        int close = 0;
        int ans = 0;

        // Left to right
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                open++;
            } else {
                close++;
            }

            if (open == close) {
                ans = max(ans, open * 2);
            }

            if (close > open) {
                open = 0;
                close = 0;
            }
        }

        open = 0;
        close = 0;

        // Right to left
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ')') {
                close++;
            } else {
                open++;
            }

            if (open == close) {
                ans = max(ans, open * 2);
            }

            if (open > close) {
                open = 0;
                close = 0;
            }
        }

        return ans;
    }
};