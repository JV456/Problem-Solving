//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if (str1.length() != str2.length())
            return false;

        if (str1.length() <= 2 || str2.length() <= 2)
            return (str1 == str2);

        string clock_rot = "";
        string anticlock_rot = "";
        int len = str2.length();

        anticlock_rot = anticlock_rot
                        + str2.substr(len - 2, 2)
                        + str2.substr(0, len - 2);

        clock_rot = clock_rot + str2.substr(2)
                    + str2.substr(0, 2);

        return (str1.compare(clock_rot) == 0
                || str1.compare(anticlock_rot) == 0);
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends