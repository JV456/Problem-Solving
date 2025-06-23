class Solution {
  public:
    int findSubString(string& str) {
        // code here
        int n = str.length();
        if (n == 0) return 0;
        
        unordered_set<char> distinct;
        for (char c : str) {
            distinct.insert(c);
        }
        int distinct_count = distinct.size();
        
        unordered_map<char, int> freq;
        int count = 0;
        int start = 0;
        int min_length = n + 1;
        
        for (int end = 0; end < n; end++) {
            char c = str[end];
            freq[c]++;
            
            if (freq[c] == 1) {
                count++;
            }
            
            while (count == distinct_count) {
                if (min_length > end - start + 1) {
                    min_length = end - start + 1;
                }
                
                char left_char = str[start];
                freq[left_char]--;
                if (freq[left_char] == 0) {
                    count--;
                }
                start++;
            }
        }
        return min_length;
    }
};