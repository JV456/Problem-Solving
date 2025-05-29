class Solution {
  public:
    int count(vector<int>& coins, int sum) {
        // code here.
        vector<int> dp(sum + 1, 0);
        int n = coins.size();
        dp[0] = 1;
        for (int i = 0; i < n; i++) {
            for (int j = coins[i]; j <= sum; j++) {
                dp[j] += dp[j - coins[i]];
            }
        }
        return dp[sum];
    }
};