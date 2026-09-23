class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
           
        unordered_map<int,int> temp;
        int sum = 0 ;
        temp[0] =-1 ;

        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            temp[sum] = i;
        }
        int leave = sum - x;

        if(leave < 0){
            return -1;
        }


        int longest = INT_MIN;
        sum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            int findSum = sum - leave ;

            if(temp.find(findSum) != temp.end()){
                int idx = temp[findSum];
                longest = max(longest , i - idx);
            }
            
        }
        return longest == INT_MIN ? -1 : nums.size() - longest; 
    }
};