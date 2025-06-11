class Solution {
  public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int>& arr) {
        // Code here
        int n = arr.size();
        vector<pair<int, int>> vec(n);
        for (int i = 0; i < n; i++) vec[i] = {arr[i], i};
        sort(vec.begin(), vec.end());
    
        vector<bool> visited(n, false);
        int swaps = 0;
    
        for (int i = 0; i < n; i++) {
            if (visited[i] || vec[i].second == i) continue;
            int cycle_size = 0;
            int j = i;
            while (!visited[j]) {
                visited[j] = true;
                j = vec[j].second;
                cycle_size++;
            }
            if (cycle_size > 1) swaps += (cycle_size - 1);
        }
        return swaps;
    }
};