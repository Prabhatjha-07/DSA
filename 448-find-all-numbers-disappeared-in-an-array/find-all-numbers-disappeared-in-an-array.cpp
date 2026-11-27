
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> ans;
        int maxi = INT_MIN;

        for(int num : nums){
            m[num]++;
            maxi = max(maxi, num);
        }

        for(int i = 0; i < nums.size(); i++){
            int j = nums.size() - i;

            if(m.find(j) == m.end()){
                ans.push_back(j);
            }
        }

        return ans;
    }
};
