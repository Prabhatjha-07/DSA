class Solution {
public:
    int strStr(string haystack, string needle) {

        for (int i = 0; i < haystack.length(); i++) {

            string ans = "";
            for (int j = i; j < haystack.length(); j++) {
                ans += haystack[j];
                if (ans.length() == needle.length()) {
                    if (ans == needle) {
                        return i;
                    }
                    break;
                }
            }
        }
        return -1;
    }
};