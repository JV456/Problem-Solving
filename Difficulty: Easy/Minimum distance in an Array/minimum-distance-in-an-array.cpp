class Solution {
  public:
    int minDist(vector<int>& a, int x, int y) {
        int n = a.size();
        int recent_x = -1, recent_y = -1;
        int ans = INT_MAX;

        // Storing the recent x or y and calculating the minimum distance
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                recent_x = i;

                // Checking both recent X and Y is found in the array or not
                if (recent_y != -1)
                    ans = min(abs(recent_x - recent_y), ans);
            } else if (a[i] == y) {
                recent_y = i;

                // Checking both recent X and Y is found in the array or not
                if (recent_x != -1)
                    ans = min(abs(recent_x - recent_y), ans);
            }
        }

        // If ans is not updated then either x or y, or both are not present in the
        // array
        if (ans == INT_MAX)
            return -1;
        return ans;
    }
};