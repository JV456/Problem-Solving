class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        unordered_map<long long, int> prefixSumCount;
        long long sum = 0, count = 0;
        prefixSumCount[0] = 1;
        for (int x : arr) {
            sum += x;
            count += prefixSumCount[sum];
            prefixSumCount[sum]++;
        }
        return count;
    }
};