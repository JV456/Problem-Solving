class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        int n = arr.size();
        std::unordered_map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            freq[arr[i]]++;
        }
        for (int i = 0; i < n; ++i) {
            if (freq[arr[i]] > 1) return i + 1;
        }
        return -1;
    }
};