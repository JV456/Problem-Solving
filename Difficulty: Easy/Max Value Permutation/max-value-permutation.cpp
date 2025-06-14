class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        const int MOD = 1e9 + 7;
        sort(arr.begin(), arr.end());
        long long result = 0;
        for (int i = 0; i < arr.size(); ++i) {
            result = (result + 1LL * arr[i] * i) % MOD;
        }
        return result;
    }
};