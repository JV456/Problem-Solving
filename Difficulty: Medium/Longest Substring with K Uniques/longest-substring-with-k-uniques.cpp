// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        unordered_map<char, int> freq;
        int maxLen = -1, left = 0;
        for (int right = 0; right < s.size(); right++) {
            freq[s[right]]++;
            while (freq.size() > k) {
                freq[s[left]]--;
                if (freq[s[left]] == 0) freq.erase(s[left]);
                left++;
            }
            if (freq.size() == k) {
                maxLen = max(maxLen, right - left + 1);
            }
        }
        return maxLen;
    }
};