class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> temp;

        for (int i = 0; i < s.length(); i++) {
            temp[s[i]]++;
        }

        string ans = "";
        char maxchar;

        while (!temp.empty()) {
            int high = 0;

            for (auto it = temp.begin(); it != temp.end(); it++) {
                if (it->second > high) {
                    high = it->second;
                    maxchar = it->first;
                }
            }
            while (high != 0) {
                ans += maxchar;
                high--;
            }

            temp.erase(maxchar);
        }
        return ans;
    }
};