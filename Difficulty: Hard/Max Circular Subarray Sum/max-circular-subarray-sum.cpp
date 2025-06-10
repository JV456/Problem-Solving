class Solution {
  public:
    int circularSubarraySum(vector<int> &arr) {
        // code here
        int total = 0, maxSum = arr[0], curMax = 0, minSum = arr[0], curMin = 0;
        for (int x : arr) {
            curMax = max(curMax + x, x);
            maxSum = max(maxSum, curMax);
            curMin = min(curMin + x, x);
            minSum = min(minSum, curMin);
            total += x;
        }
        if (maxSum < 0) return maxSum;
        return max(maxSum, total - minSum);
    }
};