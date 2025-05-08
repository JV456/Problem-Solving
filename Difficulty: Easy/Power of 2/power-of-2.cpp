//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution{
    public:
        bool isPowerofTwo(long long n){
        if(n==0) return 0;
        else if((n&(n-1))==0) 
            return 1;
        return 0;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

    int t;
    cin >> t; // testcases

    for (int i = 0; i < t; i++) {
        int n; // input a number n
        cin >> n;
        Solution ob;
        if (ob.isPowerofTwo(n))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends