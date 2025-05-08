//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        int index = 0;   

        for (int i = 0; i < s.size(); i++) {
       
        int j;  
        for (j = 0; j < i; j++) 
            if (s[i] == s[j])
            break;
     
        if (j == i)
            s[index++] = s[i];
        }

        s.resize(index);
   
        return s;
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
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends