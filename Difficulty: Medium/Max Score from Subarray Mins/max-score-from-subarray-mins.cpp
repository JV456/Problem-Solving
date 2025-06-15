

class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int n = arr.size();
        int res = 0;
        for (int i = 0; i < n - 1; ++i) {
            res = max(res, arr[i] + arr[i + 1]);
        }
        return res;
    }
};
