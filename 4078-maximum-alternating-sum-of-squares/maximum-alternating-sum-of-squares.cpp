class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            nums[i] = abs(nums[i]);
        }

        sort(nums.begin(), nums.end());

        int left = 0;
        int right = n - 1;

        long long score = 0;
        bool add = true;

        while (left <= right) {
            if (add) {
                score += 1LL * nums[right] * nums[right];
                right--;
            } else {
                score -= 1LL * nums[left] * nums[left];
                left++;
            }

            add = !add;
        }

        return score;
    }
};