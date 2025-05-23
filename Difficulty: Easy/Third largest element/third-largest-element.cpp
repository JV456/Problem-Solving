class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        if (arr.size() < 3) return -1;
        int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        for (int num : arr) {
            if (num >= first) {
                third = second;
                second = first;
                first = num;
            } else if (num >= second) {
                third = second;
                second = num;
            } else if (num >= third) {
                third = num;
            }
        }
        return third;

    }
};