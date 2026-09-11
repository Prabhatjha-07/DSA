class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;

        unordered_map<int, int> freq;

        for (int i = 0; i < digits.size(); i++) {
            freq[digits[i]]++;
        }

        for (int num = 100; num <= 998; num += 2) {
            int x = num;
            bool possible = true;

            unordered_map<int, int> temp = freq;

            for (int i = 0; i < 3; i++) {
                int digit = x % 10;
                x /= 10;

                if (temp[digit] == 0) {
                    possible = false;
                    break;
                }

                temp[digit]--;
            }

            if (possible) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};