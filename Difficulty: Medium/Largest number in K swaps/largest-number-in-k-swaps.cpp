//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    void findMaximumNum(string& s, int k, string& maxStr) {
        if (k == 0)
            return;

        int n = s.length();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (s[i] < s[j]) {
                    swap(s[i], s[j]);

                    if (s.compare(maxStr) > 0)
                        maxStr = s;

                    findMaximumNum(s, k - 1, maxStr);
                    swap(s[i], s[j]);  
                }
            }
        }
    }

    string findMaximumNum(string s, int k) {
        string maxStr = s;
        findMaximumNum(s, k, maxStr);
        return maxStr;
    }
};



//{ Driver Code Starts.

int main() {
    int t, k;
    string str;

    cin >> t;
    while (t--) {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends