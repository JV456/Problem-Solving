// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int floor = -1, ceil = -1;
        for (int val : arr) {
            if (val <= x && val > floor) floor = val;
            if (val >= x && (ceil == -1 || val < ceil)) ceil = val;
        }
        return {floor, ceil};
    }
};