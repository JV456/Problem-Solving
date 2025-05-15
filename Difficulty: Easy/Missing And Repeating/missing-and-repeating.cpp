//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
    
        int repeating = -1;
    
        for (int i = 0; i < n; i++) {
            int val = abs(arr[i]);
            
            if (arr[val - 1] > 0) {
                arr[val - 1] = -arr[val - 1];
            }
            else {

                repeating = val;
            }
        }
        
        int missing = -1;

        for (int i=0; i<n; i++) {
            if (arr[i] > 0) {
                missing = i+1;
                break;
            }
        }
        
        return {repeating, missing};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends