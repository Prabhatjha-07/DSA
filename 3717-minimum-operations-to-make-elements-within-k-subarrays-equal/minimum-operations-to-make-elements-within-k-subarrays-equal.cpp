
class Solution {
public:
    using ll = long long;

    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();

        multiset<int> left, right;
        ll sumLeft = 0, sumRight = 0;

        auto balance = [&]() {
            while (left.size() > right.size() + 1) {
                int v = *left.rbegin();
                left.erase(left.find(v));
                sumLeft -= v;

                right.insert(v);
                sumRight += v;
            }

            while (left.size() < right.size()) {
                int v = *right.begin();
                right.erase(right.find(v));
                sumRight -= v;

                left.insert(v);
                sumLeft += v;
            }
        };

        auto add = [&](int val) {
            if (left.empty() || val <= *left.rbegin()) {
                left.insert(val);
                sumLeft += val;
            } else {
                right.insert(val);
                sumRight += val;
            }

            balance();
        };

        auto remove = [&](int val) {
            auto it = left.find(val);

            if (it != left.end()) {
                left.erase(it);
                sumLeft -= val;
            } else {
                it = right.find(val);
                right.erase(it);
                sumRight -= val;
            }

            balance();
        };

        auto getCost = [&]() -> ll {
            ll median = *left.rbegin();

            return median * left.size() - sumLeft
                 + sumRight - median * right.size();
        };

        // Step 1: Calculate cost of every window
        vector<ll> cost(n - x + 1);

        for (int i = 0; i < x; i++) {
            add(nums[i]);
        }

        cost[0] = getCost();

        for (int i = x; i < n; i++) {
            remove(nums[i - x]);
            add(nums[i]);

            cost[i - x + 1] = getCost();
        }

        // Step 2: Dynamic Programming
        const ll INF = LLONG_MAX / 4;

        vector<vector<ll>> dp(k + 1,
                              vector<ll>(n + 1, INF));

        for (int i = 0; i <= n; i++) {
            dp[0][i] = 0;
        }

        for (int j = 1; j <= k; j++) {
            for (int i = 1; i <= n; i++) {

                // Skip current element
                dp[j][i] = dp[j][i - 1];

                // Select a window of size x
                if (i >= x && dp[j - 1][i - x] != INF) {
                    dp[j][i] = min(
                        dp[j][i],
                        dp[j - 1][i - x] + cost[i - x]
                    );
                }
            }
        }

        return dp[k][n];
    }
};
