//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
    unordered_map<char, int> romanMap = {{'I', 1}, {'V', 5}, 
                                         {'X', 10}, {'L', 50},
                                         {'C', 100}, {'D', 500}, 
                                         {'M', 1000}};

    int res = 0;
    for (int i = 0; i < s.length(); i++) {

        if (i + 1 < s.length() && romanMap[s[i]] < romanMap[s[i + 1]]) {
            res += romanMap[s[i + 1]] - romanMap[s[i]];

            i++;
        }
        else {
            res += romanMap[s[i]];
        }
    }

    return res;
}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends