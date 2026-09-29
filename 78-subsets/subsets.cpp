class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> temp;
        int n = nums.size() ;

        for(int i = 0 ; i < (1 << n) ; i++){
            vector<int> snap ;

            for(int j = 0 ; j < n ; j++){
                if(i & (1 << j)){
                    snap.push_back(nums[j]);
                }
            }
            temp.push_back(snap);
        }
        return temp;

        
    }
};