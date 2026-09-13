class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid,
                                    vector<int>& rowShift,
                                    vector<int>& colShift) {

        vector<vector<int>> temp(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            int k = rowShift[i];
            for (int j = 0; j < n; j++) {
                temp[i][j] = grid[i][(j + k) % n];
            }
        }
        vector<vector<int>> snap(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            int k = colShift[i];

            for (int j = 0; j < n; j++) {
                snap[j][i] = temp[(j + k) % n][i];
            }
        }
        return snap;
    }
};