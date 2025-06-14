class Solution {
  public:
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        if (n == 1) return 0;
        int prev = 0, prev2 = 0;
        for (int i = 1; i < n; ++i) {
            int one = prev + abs(height[i] - height[i-1]);
            int two = i > 1 ? prev2 + abs(height[i] - height[i-2]) : INT_MAX;
            int curr = min(one, two);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};