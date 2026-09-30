class Solution {
public:

void solve( vector<int>& nums, int id ,  vector<int >& curr ,vector<vector<int>>& ans   ){
    int n = nums.size() ;
    if(id == n ){
        ans.push_back(curr);
        return ;
    }
    curr.push_back(nums[id]);

    solve(nums, id+1 , curr , ans);
    curr.pop_back();
    solve(nums , id + 1 , curr , ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans ;
        vector<int> curr;

        solve(nums , 0 , curr , ans);
        return ans;
        
    }
};