class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int n = arr.size();
        int left = 0, right = n - 1, ans = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == 1) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        if (ans == -1) return -1;
        if (ans == 0) return 0;
        return ans;
    }
};