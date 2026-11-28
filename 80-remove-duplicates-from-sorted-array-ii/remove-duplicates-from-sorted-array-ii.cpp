class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int , int> m ;

        for(int num : nums){
            m[num]++;
        }
           
           vector<int> ans;

      
        for(auto it = m.begin(); it != m.end(); it++) {
            if(it->second >= 2) {
                ans.push_back(it->first);
                ans.push_back(it->first);
            }
            else {
                ans.push_back(it->first);
            }
        }
     
         for(int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }
       int k = ans.size();
       return k;
    }
};