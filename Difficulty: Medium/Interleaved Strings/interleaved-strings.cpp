class Solution {
  public:
    bool isInterleave(string& s1, string& s2, string& s3) {
        // code here
        int m = s1.size(), n = s2.size(), l = s3.size();
        if (m + n != l) return false;
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        dp[0][0] = true;
        for (int i = 1; i <= m; ++i)
            dp[i][0] = dp[i-1][0] && (s1[i-1] == s3[i-1]);
        for (int j = 1; j <= n; ++j)
            dp[0][j] = dp[0][j-1] && (s2[j-1] == s3[j-1]);
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                char c = s3[i + j - 1];
                dp[i][j] = (dp[i-1][j] && s1[i-1] == c) || (dp[i][j-1] && s2[j-1] == c);
            }
        }
        return dp[m][n];
    }
};