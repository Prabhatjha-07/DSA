class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {

        int n = arr.size();

        vector<int> prabhat(n, INT_MAX);

        int left = 0;
        int sum = 0;

        int shortestLength = INT_MAX;

        int answer = INT_MAX;

        for (int right = 0; right < n; right++) {

            sum += arr[right];

            while (sum > target) {
                sum -= arr[left];
                left++;
            }

            if (sum == target) {

                int currentLength = right - left + 1;

                if (left > 0 && prabhat[left - 1] != INT_MAX) {

                    answer = min(answer, currentLength + prabhat[left - 1]);
                }

                shortestLength = min(shortestLength, currentLength);
            }

            prabhat[right] = shortestLength;
        }

        if (answer == INT_MAX) {
            return -1;
        }

        return answer;
    }
};