// User function Template for C++

class Solution {
  public:
    int countDistinctSubsequences(string s) {
        int n = s.length();
        vector<long long> dp(n + 1, 0);
        unordered_map<char, int> last;
        dp[0] = 1;
        for (int i = 1; i <= n; i++) {
            dp[i] = 2 * dp[i - 1];
            if (last.find(s[i - 1]) != last.end()) {
                dp[i] -= dp[last[s[i - 1]] - 1];
            }
            last[s[i - 1]] = i;
        }
        return dp[n];
    }
    
    string betterString(string s1, string s2) {
        int count1 = countDistinctSubsequences(s1);
        int count2 = countDistinctSubsequences(s2);
        if (count1 >= count2) return s1;
        return s2;
    }
};