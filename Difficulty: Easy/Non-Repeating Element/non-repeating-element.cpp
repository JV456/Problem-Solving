
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        unordered_map<int, int> freq;
        for (int num : arr) freq[num]++;
        for (int num : arr) if (freq[num] == 1) return num;
        return 0;
    }
};
