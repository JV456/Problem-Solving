// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int firstZero = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == 0) {
                firstZero = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return n - firstZero;
    }
};