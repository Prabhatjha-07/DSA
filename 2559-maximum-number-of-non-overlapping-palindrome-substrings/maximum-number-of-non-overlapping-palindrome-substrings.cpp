class Solution {
public:
    bool isPalindrome(string s, int left, int right) {

        while (left < right) {

            if (s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    int maxPalindromes(string s, int k) {

        int n = s.length();
        int count = 0;
        int start = 0;

        for (int end = k - 1; end < n; end++) {

            for (int length = k; length <= end - start + 1; length++) {

                int left = end - length + 1;

                bool palindrome = isPalindrome(s, left, end);

                if (palindrome) {

                    count++;

                    start = end + 1;

                    break;
                }
            }
        }

        return count;
    }
};