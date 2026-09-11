class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_map<int, int> freq;
        for (int i = 0; i < digits.size(); i++) {
            freq[digits[i]]++;
        }
        int count = 0;

        for (int num = 100; num <= 999; num += 2) {
            int x = num;

            bool possible = true;

            unordered_map<int, int> temp = freq;

            for (int k = 0; k < 3; k++) {
                int digit = x % 10;
                x /= 10;
                if (temp[digit] == 0) {
                    possible = false;
                    break;
                }
                temp[digit]--;
            }
            if (possible) {
                count++;
            }
        }
        return count;
    }
};