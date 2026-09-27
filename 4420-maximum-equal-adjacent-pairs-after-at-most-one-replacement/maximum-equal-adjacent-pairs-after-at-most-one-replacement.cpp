class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int result = 0;
        map<pair<int, int>, int> temp;

        for (int i = 0; i+1 < nums.size(); i++) {
            if (nums[i] == nums[i + 1]) {
                result++;
            }
        }

        for (int i = 0; i+1 < nums.size(); i++) {
            if (nums[i] != nums[i + 1]) {
                temp[{nums[i], nums[i + 1]}]++;
                temp[{nums[i + 1], nums[i]}]++;
            }
        }
        int prabhat = 0;

        for (auto it : temp) {
            prabhat = max(prabhat, it.second);
        }
        return result + prabhat;
    }
};