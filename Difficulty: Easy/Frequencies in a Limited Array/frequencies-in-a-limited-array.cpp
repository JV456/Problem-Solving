class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> freq(n, 0);  
    
        for (int num : arr) {
            freq[num - 1]++;  
        }
    
        return freq;
    }
};
