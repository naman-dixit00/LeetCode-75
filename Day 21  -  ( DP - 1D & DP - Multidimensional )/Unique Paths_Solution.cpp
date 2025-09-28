class Solution {
public:
    int uniquePaths(int m, int n) {
        // Create 2D array dynamically
        int **dp = new int*[m];
        for(int i = 0; i < m; i++) {
            dp[i] = new int[n];
            for(int j = 0; j < n; j++)
                dp[i][j] = 1; // initialize all cells to 1
        }

        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }

        int result = dp[m-1][n-1];

        // Free allocated memory
        for(int i = 0; i < m; i++)
            delete [] dp[i];
        delete [] dp;

        return result;
    }
};
