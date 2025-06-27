// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        unordered_map<string, vector<string>> mp;
        vector<string> keys;
        for (auto& s : arr) {
            string t = s;
            sort(t.begin(), t.end());
            if (mp.find(t) == mp.end()) keys.push_back(t);
            mp[t].push_back(s);
        }
        vector<vector<string>> res;
        for (auto& key : keys) res.push_back(mp[key]);
        return res;
    }
};