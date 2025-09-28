#include <iostream>
#include <cstring>  // for C-style strings if needed
#include <string>   // for std::string

using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        
        // Create a 2D array dynamically
        int **dp = new int*[m+1];
        for(int i = 0; i <= m; i++) {
            dp[i] = new int[n+1];
            for(int j = 0; j <= n; j++)
                dp[i][j] = 0; // initialize all elements to 0
        }

        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                if(text1[i-1] == text2[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = (dp[i-1][j] > dp[i][j-1]) ? dp[i-1][j] : dp[i][j-1];
            }
        }

        int result = dp[m][n];

        // Free allocated memory
        for(int i = 0; i <= m; i++)
            delete [] dp[i];
        delete [] dp;

        return result;
    }
};

// Example usage
int main() {
    Solution sol;
    string a = "abcde";
    string b = "ace";
    cout << "LCS length: " << sol.longestCommonSubsequence(a, b) << endl;
    return 0;
}
