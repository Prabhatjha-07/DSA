class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;

        int count = 0;
        int p_sum = 0;

        for(int i = 0; i < arr.size(); i++){
            for(int j = i; j < arr.size(); j++){

                p_sum = 0;
                count = 0;

                for(int k = i; k <= j; k++){
                    p_sum += arr[k];
                    count++;
                }

                if(count % 2 != 0){
                    sum += p_sum;
                }
            }
        }

        return sum;
    }
};