class Solution {
public:
    int beauty(const unordered_map<char, int>& snap) {

        int min = INT_MAX;
        for (auto it = snap.begin(); it != snap.end(); it++) {
            if (it->second < min) {
                min = it->second;
            }
        }
        int max = 0;
        for (auto it = snap.begin(); it != snap.end(); it++) {
            if (it->second > max) {
                max = it->second;
            }
        }
        return max - min;
    }
    int beautySum(string s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            unordered_map<char, int> temp;

            for (int j = i ; j < s.length(); j++) {
                temp[s[j]]++;
                ans += beauty(temp);
            }
        }
        return ans;
    }
};