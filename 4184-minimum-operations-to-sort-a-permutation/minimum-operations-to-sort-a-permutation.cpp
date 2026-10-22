class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 0;

        int INF = INT_MAX;
        int ans = INF;
        int k = nums[0];

        bool asc = true;
        for (int i = 0; i < n; i++) {
            if (nums[i] != (i + k) % n) {
                asc = false;
                break;
            }
        }
        if (asc) {
            if (k == 0)
                return 0;
            ans = min(ans, min(n - k, k + 2));
        }

        bool desc = true;
        for (int i = 0; i < n; i++) {
            if (nums[i] != ((k - i) % n + n) % n) {
                desc = false;
                break;
            }
        }
        if (desc) {
            int j = (k + 1) % n;
            int a = (n - j) % n;
            ans = min(ans, 1 + min(j, a));
        }

        return ans == INF ? -1 : ans;
    }
};