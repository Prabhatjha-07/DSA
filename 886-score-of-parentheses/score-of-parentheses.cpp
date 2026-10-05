class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> snap;
        snap.push(0);

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                snap.push(0);
            }
            else {
                int x = snap.top();
                snap.pop();

                if (x == 0) {
                    snap.top() += 1;
                }
                else {
                    snap.top() += 2 * x;
                }
            }
        }

        return snap.top();
    }
};