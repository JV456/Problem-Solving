//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
        int nthFibonacci(int n){
    
        if (n <= 1) return n;
        
        int curr = 0;

        int prev1 = 1;
        int prev2 = 0;

        for (int i = 2; i <= n; i++){

            curr = prev1 + prev2;

            prev2 = prev1;

            prev1 = curr;
        }
    
        return curr;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends