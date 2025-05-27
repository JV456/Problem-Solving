// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int low = 0, high = arr.size() - 1;
        while (low <= high) {
            if (arr[low] <= arr[high]) return low;
            int mid = low + (high - low) / 2;
            int next = (mid + 1) % arr.size();
            int prev = (mid + arr.size() - 1) % arr.size();
            if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) return mid;
            else if (arr[mid] <= arr[high]) high = mid - 1;
            else low = mid + 1;
        }
        return 0;
    }
};
