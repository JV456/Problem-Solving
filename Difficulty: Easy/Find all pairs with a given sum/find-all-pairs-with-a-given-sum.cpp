class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
        // Code here
        unordered_map<int, int> freqA;
        for (int num : arr1) {
            freqA[num]++;
        }
        unordered_map<int, int> freqB;
        for (int num : arr2) {
            freqB[num]++;
        }
        
        set<int> distinctA(arr1.begin(), arr1.end());
        
        vector<pair<int, int>> result;
        for (int u : distinctA) {
            int v = target - u;
            if (freqB.find(v) != freqB.end()) {
                int count = freqA[u] * freqB[v];
                for (int i = 0; i < count; i++) {
                    result.push_back({u, v});
                }
            }
        }
        
        return result;
    }
};