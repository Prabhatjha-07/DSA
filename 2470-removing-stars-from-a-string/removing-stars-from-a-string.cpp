class Solution {
public:
    string removeStars(string s) {
        stack<char> temp;
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '*') {
                temp.push(s[i]);
            }
            if (s[i] == '*' && !temp.empty()) {
                temp.pop();
            }
        }
        while (!temp.empty()) {
            ans += temp.top();
            temp.pop();
        }
        reverse(begin(ans) , end(ans));

        return ans;
    }
};