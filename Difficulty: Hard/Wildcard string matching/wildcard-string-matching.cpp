//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    bool wildCardRec(string& txt, string& pat, 
                     int n, int m, vector<vector<int>> &memo) {

        if (m == 0)
            return (n == 0);

        if (memo[n][m] != -1)
            return memo[n][m];

        if (n == 0) {
            for (int i = 0; i < m; i++)
                if (pat[i] != '*')
                    return memo[n][m] = false;
            return memo[n][m] = true;
        }

        if (txt[n - 1] == pat[m - 1] || pat[m - 1] == '?')
            return memo[n][m] = wildCardRec(txt, pat, n - 1, m - 1, memo);

        if (pat[m - 1] == '*')
            return memo[n][m] = 
                   wildCardRec(txt, pat, n, m - 1, memo) || 
                   wildCardRec(txt, pat, n - 1, m, memo);

        return memo[n][m] = false;
    }

    bool wildCard(string txt, string pat) {
        int n = txt.size();
        int m = pat.size();
        
        vector<vector<int>> memo(n + 1, vector<int>(m + 1, -1));
        return wildCardRec(txt, pat, n, m, memo);
    }

    bool match(string wild, string pattern) {
        return wildCard(pattern, wild);
    }
};




//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends