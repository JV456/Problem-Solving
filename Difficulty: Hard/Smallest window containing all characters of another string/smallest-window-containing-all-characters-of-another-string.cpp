//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string smallestWindow(string s, string p) {
        if (s.length() < p.length()) return "";

        vector<int> patFreq(256, 0), strFreq(256, 0);

        for (char c : p) patFreq[c]++;

        int start = 0, startIdx = -1, minLen = INT_MAX;
        int count = 0;

        for (int end = 0; end < s.length(); end++) {
            strFreq[s[end]]++;

            if (patFreq[s[end]] != 0 && strFreq[s[end]] <= patFreq[s[end]]) {
                count++;
            }

            while (count == p.length()) {
                // Valid window found
                if (minLen > end - start + 1) {
                    minLen = end - start + 1;
                    startIdx = start;
                }

                strFreq[s[start]]--;
                if (patFreq[s[start]] != 0 && strFreq[s[start]] < patFreq[s[start]]) {
                    count--;
                }
                start++;
            }
        }

        if (startIdx == -1) return "";

        return s.substr(startIdx, minLen);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        Solution obj;
        string str = obj.smallestWindow(s1, s2);
        if (str.size() == 0) {
            cout << "\"\"" << endl;
        } else {
            cout << str << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends