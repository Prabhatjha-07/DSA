class Solution {
public:
    string largestOddNumber(string num) {
        int left = num.length() - 1;
        string ans = "";
        while (left >=0 && num[left] % 2 == 0 ) {

            left--;
        }
        for (int i = 0; i <= left; i++) {
            ans += num[i];
        }

        return ans;
    }
};