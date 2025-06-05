// User function template for C++

class Solution {
public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        unordered_set<int> seen;
        unordered_set<int> used;
        vector<vector<int>> result;
    
        for (int num : arr) {
            if (seen.count(-num) && !used.count(abs(num))) {
                vector<int> pair = {min(num, -num), max(num, -num)};
                result.push_back(pair);
                used.insert(abs(num)); 
            }
            seen.insert(num);
        }
        sort(result.begin(), result.end());
        return result;
    }
};