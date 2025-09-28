class Solution {
public:
    int minDistance(char* word1, int len1, char* word2, int len2) {
        int **dp = new int*[len1+1];
        for(int i = 0; i <= len1; i++) {
            dp[i] = new int[len2+1];
            for(int j = 0; j <= len2; j++)
                dp[i][j] = 0;
        }

        for(int i = 0; i <= len1; i++) dp[i][0] = i;
        for(int j = 0; j <= len2; j++) dp[0][j] = j;

        for(int i = 1; i <= len1; i++) {
            for(int j = 1; j <= len2; j++) {
                if(word1[i-1] == word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else {
                    int insertOp = dp[i][j-1] + 1;
                    int deleteOp = dp[i-1][j] + 1;
                    int replaceOp = dp[i-1][j-1] + 1;
                    dp[i][j] = (insertOp < deleteOp) ? ((insertOp < replaceOp) ? insertOp : replaceOp) : ((deleteOp < replaceOp) ? deleteOp : replaceOp);
                }
            }
        }

        int result = dp[len1][len2];
        for(int i = 0; i <= len1; i++) delete [] dp[i];
        delete [] dp;

        return result;
    }
};
