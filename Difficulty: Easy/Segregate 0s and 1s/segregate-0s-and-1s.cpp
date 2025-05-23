// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int left = 0, right = arr.size() - 1;
        while (left < right) {
            while (arr[left] == 0 && left < right) left++;
            while (arr[right] == 1 && left < right) right--;
            if (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};