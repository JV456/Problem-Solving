// Final function implementation
class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int count = 0;
        for (int x : arr) {
            if (x <= k) count++;
        }
        int bad = 0;
        for (int i = 0; i < count; ++i) {
            if (arr[i] > k) bad++;
        }
        int ans = bad;
        for (int i = 0, j = count; j < n; ++i, ++j) {
            if (arr[i] > k) bad--;
            if (arr[j] > k) bad++;
            ans = min(ans, bad);
        }
        return ans;
    }
};
