class Solution {
public:
    void bracket(int open, int close, string snap, vector<string>& ans) {

        if (open == 0 && close == 0) {
            ans.push_back(snap);
            return;
        }

        if (open > 0) {
            bracket(open - 1, close, snap + '(', ans);
        }

        if (close > open) {
            bracket(open, close - 1, snap + ')', ans);
        }
    }

    vector<string> generateParenthesis(int n) {

        vector<string> ans;

        bracket(n, n, "", ans);

        return ans;
    }
};