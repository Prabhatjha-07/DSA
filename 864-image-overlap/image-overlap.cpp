class Solution {
public:
    int maxOverlaps(int row, int col, vector<vector<int>>& img1,
                    vector<vector<int>>& img2) {
        int count = 0;
        int n = img1.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int new_row = i + row;
                int new_col = j + col;

                if (new_row >= 0 && new_row < n && new_col >= 0 &&
                    new_col < n) {
                    if (img1[i][j] == 1 &&  img2[new_row][new_col] == 1) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int count = 0;

        int n = img1.size();

        for (int row = -n + 1; row < n ; row++) {
            for (int col = -n + 1; col < n; col++) {
                int call = maxOverlaps(row, col, img1, img2);

                count = max(call, count);
            }
        }
        return count;
    }
};