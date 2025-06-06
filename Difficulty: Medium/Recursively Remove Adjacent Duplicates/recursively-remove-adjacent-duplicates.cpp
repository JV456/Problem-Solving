// User function template for C++

class Solution {
  public:
    string removeUtil(string &s) {
        // code here
        if (s.empty()) return "";
        string result;
        int i = 0, n = s.size();
        while (i < n) {
            int j = i + 1;
            while (j < n && s[j] == s[i]) j++;
            if (j == i + 1) result += s[i];
            i = j;
        }
        if (result.size() == s.size()) return result;
        return removeUtil(result);
    }
};