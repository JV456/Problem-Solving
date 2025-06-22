// User function template for C++

class Solution {
  public:
    // Function to find two repeated elements.
    vector<int> twoRepeated(int n, int arr[]) {
        // Your code here
        unordered_set<int> seen;
        vector<int> result;
        for (int i = 0; i < n + 2; ++i) {
            if (seen.find(arr[i]) != seen.end()) {
                result.push_back(arr[i]);
                if (result.size() == 2) 
                    break;
            } else {
                seen.insert(arr[i]);
            }
        }
        return result;
    }
};