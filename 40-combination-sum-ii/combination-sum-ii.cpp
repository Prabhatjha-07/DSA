class Solution {
public:
    void solve(vector<int>& nums, int target, int start, vector<vector<int>>& ans, vector<int>& temp) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int id = start; id < nums.size(); id++) {
            if (id > start && nums[id] == nums[id - 1])
                continue;

            if (nums[id] > target)
                break;

            temp.push_back(nums[id]);
            solve(nums, target - nums[id], id + 1, ans, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;

        solve(candidates, target, 0, ans, temp);

        return ans;
    }
};