//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        sort(arr.begin(), arr.end());

        string first = arr.front();
        string last = arr.back();
        int minLength = min(first.size(), last.size());
    
        int i = 0;
        
        while (i < minLength && first[i] == last[i]) {
            i++;
        }

        return first.substr(0, i);
        }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        string ans = ob.longestCommonPrefix(arr);
        if (ans.empty())
            cout << "\"\"";
        else
            cout << ans;
        cout << endl;
    }
}

// } Driver Code Ends