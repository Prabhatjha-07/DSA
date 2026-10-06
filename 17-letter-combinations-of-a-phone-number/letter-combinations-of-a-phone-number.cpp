class Solution {
public:
    string getdigit(char digit) {
        switch (digit) {
        case '2':
            return "abc";

        case '3':
            return "def";

        case '4':
            return "ghi";

        case '5':
            return "jkl";

        case '6':
            return "mno";

        case '7':
            return "pqrs";

        case '8':
            return "tuv";

        case '9':
            return "wxyz";
        }

        return "";
    }

    void solve(int i, vector<string>& ans, string& curr,
               string& digits) {

        if (i == digits.length()) {
            ans.push_back(curr);
            return;
        }

        string temp = getdigit(digits[i]);

        for (int j = 0; j < temp.length(); j++) {

            curr.push_back(temp[j]);

            solve(i + 1, ans, curr, digits);

            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;
        string curr;

        if (digits.empty())
            return ans;

        solve(0, ans, curr, digits);

        return ans;
    }
};