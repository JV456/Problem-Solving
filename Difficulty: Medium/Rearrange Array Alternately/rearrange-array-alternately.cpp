class Solution {
  public:
    void rearrange(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return;
    
        sort(arr.begin(), arr.end());
    
        int max_idx = n - 1;
        int min_idx = 0;
        int max_elem = arr[max_idx] + 1;
    
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                arr[i] += (arr[max_idx] % max_elem) * max_elem;
                max_idx--;
            } else {
                arr[i] += (arr[min_idx] % max_elem) * max_elem;
                min_idx++;
            }
        }
    
        for (int i = 0; i < n; i++) {
            arr[i] /= max_elem;
        }
    }
};