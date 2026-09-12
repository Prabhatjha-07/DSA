class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> temp;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '#') {
                temp.push(s[i]);
            }
            if (s[i] == '#') {
                if (!temp.empty()) {
                    temp.pop();
                }
            }
        }
        stack<char> snap;
        for (int j = 0; j < t.length(); j++) {
            if (t[j] != '#') {
                snap.push(t[j]);
            }
            if (t[j] == '#') {
                if (!snap.empty()) {
                    snap.pop();
                }
            }
        }
        if (temp == snap) {
            return true;
        }
        return false;
    }
};