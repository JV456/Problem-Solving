// User function template for C++

// Function to return the count of the number of elements in
// the intersection of two arrays.

class Solution {
  public:
    int numberofElementsInIntersection(vector<int> &a, vector<int> &b) {
        // Your code goes here
        unordered_set<int> set_a(a.begin(), a.end());
        int count = 0;
        
        for (int num : b) {
            if (set_a.find(num) != set_a.end()) {
                count++;
            }
        }
        
        return count;
    }
};