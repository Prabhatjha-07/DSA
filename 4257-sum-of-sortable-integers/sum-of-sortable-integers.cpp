class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();

        // Prefix count of adjacent descents.
        vector<int> pref(n, 0);
        for (int i = 1; i < n; ++i) {
            pref[i] = pref[i - 1] + (nums[i - 1] > nums[i]);
        }

        int ans = 0;

        for (int k = 1; k <= n; ++k) {
            if (n % k != 0)
                continue;

            bool ok = true;
            int prevMax = INT_MIN;

            for (int s = 0; s < n; s += k) {
                int e = s + k;

                int descents = pref[e - 1] - pref[s];

                if (nums[e - 1] > nums[s]) {
                    ++descents;
                }

                if (descents > 1) {
                    ok = false;
                    break;
                }

                int mn = INT_MAX;
                int mx = INT_MIN;

                for (int i = s; i < e; ++i) {
                    mn = min(mn, nums[i]);
                    mx = max(mx, nums[i]);
                }

                if (s > 0 && prevMax > mn) {
                    ok = false;
                    break;
                }

                prevMax = mx;
            }

            if (ok)
                ans += k;
        }

        return ans;
    }
};