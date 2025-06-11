class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        sort(arr.begin(), arr.end(), greater<int>());
        return vector<int>(arr.begin(), arr.begin() + k);
    }
};