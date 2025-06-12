class Solution {
  public:
    int countSubstr(string& s, int k) {
        // code here.
        int n = s.size(), res = 0;
        for (int i = 0; i < n; ++i) {
            vector<int> freq(26, 0);
            int distinct = 0;
            for (int j = i; j < n; ++j) {
                if (freq[s[j] - 'a'] == 0) distinct++;
                freq[s[j] - 'a']++;
                if (distinct == k) res++;
                else if (distinct > k) break;
            }
        }
        return res;
    }
};