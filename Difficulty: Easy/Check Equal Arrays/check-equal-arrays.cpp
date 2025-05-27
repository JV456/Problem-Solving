// User function template for C++

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        if (a.size() != b.size()) return false;
        unordered_map<int, int> freq;
        for (int num : a) freq[num]++;
        for (int num : b) {
            if (freq.find(num) == freq.end() || freq[num] == 0) return false;
            freq[num]--;
        }
        return true;
    }
};