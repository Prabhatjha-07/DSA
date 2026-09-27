class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> temp;

        for (int i = 0; i < nums.size(); i++) {
            temp[nums[i]]++;
        }

        vector<int> snap;
        while (!temp.empty()) {
            for (auto it = temp.begin(); it != temp.end();) {

                snap.push_back(it->first);
                it->second--;

                if (it->second == 0) {
                    it = temp.erase(it);
                } else {
                    it++;
                }
            }
        }

        return snap;
    }
};