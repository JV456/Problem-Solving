//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    string findSum(string &s1, string &s2) {

        if (s1.empty()) return s2;
        if (s2.empty()) return s1;

        string result = "";

        int i = s1.length() - 1;
        int j = s2.length() - 1;

        int carry = 0;

        while (i >= 0 || j >= 0 || carry > 0) {

            int digit1 = (i >= 0) ? s1[i] - '0' : 0;
            int digit2 = (j >= 0) ? s2[j] - '0' : 0;

            int sum = digit1 + digit2 + carry;

            carry = sum / 10;
            sum %= 10;

            result.push_back(('0' + sum));

            i--;
            j--;
        }

        while (result.size() > 1 && result[result.size()-1]=='0') {
            result.pop_back();
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends