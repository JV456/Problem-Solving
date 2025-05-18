//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


#define MAX_CHAR 26  

class Solution {
  public:
    char nonRepeatingChar(string &s) {
        vector<int> vis(MAX_CHAR, -1);
        for (int i = 0; i < s.length(); ++i) {
            int index = s[i] - 'a';
            if (vis[index] == -1) {
                vis[index] = i;  
            } else {
                vis[index] = -2; 
            }
        }
    
        int idx = -1;
        for (int i = 0; i < MAX_CHAR; ++i) {
            if (vis[i] >= 0 && (idx == -1 || vis[i] < vis[idx])) {
                idx = i;
            }
        }
        return (idx == -1) ? '$' : s[vis[idx]];
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;

    while (T--) {

        string S;
        cin >> S;
        Solution obj;
        char ans = obj.nonRepeatingChar(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends