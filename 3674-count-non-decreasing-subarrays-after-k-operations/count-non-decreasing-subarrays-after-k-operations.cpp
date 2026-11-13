class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int LOG = 18;

        vector<int> ng(n + 1, n);
        vector<int> st;
        vector<long long> pref(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + nums[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.back()] <= nums[i]) {
                st.pop_back();
            }

            if (!st.empty()) {
                ng[i] = st.back();
            }

            st.push_back(i);
        }

        vector<vector<int>> up(LOG, vector<int>(n + 1, n));
        vector<vector<long long>> cost(LOG, vector<long long>(n + 1, 0));

        for (int i = 0; i < n; i++) {
            up[0][i] = ng[i];

            cost[0][i] = 1LL * nums[i] * (ng[i] - i)
                       - (pref[ng[i]] - pref[i]);
        }

        for (int j = 1; j < LOG; j++) {
            for (int i = 0; i < n; i++) {
                up[j][i] = up[j - 1][up[j - 1][i]];

                cost[j][i] = cost[j - 1][i]
                           + cost[j - 1][up[j - 1][i]];
            }
        }

        auto getCost = [&](int l, int r) -> long long {
            long long res = 0;
            int cur = l;

            for (int j = LOG - 1; j >= 0; j--) {
                if (up[j][cur] <= r) {
                    res += cost[j][cur];
                    cur = up[j][cur];
                }
            }

            res += 1LL * nums[cur] * (r - cur + 1)
                 - (pref[r + 1] - pref[cur]);

            return res;
        };

        long long ans = 0;

        for (int r = 0; r < n; r++) {
            int low = 0, high = r;

            while (low < high) {
                int mid = low + (high - low) / 2;

                if (getCost(mid, r) <= k) {
                    high = mid;
                } else {
                    low = mid + 1;
                }
            }

            ans += r - low + 1;
        }

        return ans;
    }
};