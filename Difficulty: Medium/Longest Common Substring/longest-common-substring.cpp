//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestCommonSubstr(const string& s1, const string& s2) {
    int m = s1.length();
    int n = s2.length();

    vector<int> prev(n + 1, 0);
    
    int res = 0;
    for (int i = 1; i <= m; i++) {

        vector<int> curr(n + 1, 0);
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                curr[j] = prev[j - 1] + 1;
                res = max(res, curr[j]);
            } else {
                curr[j] = 0;
            }
        }

        prev = curr;
    }
    return res;
}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends