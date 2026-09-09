class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        string temp = s + s;

        for (int i = 0; i <= temp.length(); i++) {
            string ans = temp.substr(i, goal.length());

            if (ans == goal) {
                return true;
            }
        }
        return false;
    }
};