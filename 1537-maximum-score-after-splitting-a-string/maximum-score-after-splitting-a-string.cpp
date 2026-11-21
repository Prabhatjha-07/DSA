class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int maxi = INT_MIN;

        vector<int> prefix(n);
        int p = 0;

        // Count number of ones from right side
        for(int i = n-1; i >= 0; i--) {
            p = p + (s[i] - '0');
            prefix[i] = p;
        }

        int zero = 0;

        for(int i = 0; i < n-1; i++) {

            if(s[i] == '0') {
                zero++;
            }

            int z = zero + prefix[i+1];

            maxi = max(maxi, z);
        }

        return maxi;
    }
};