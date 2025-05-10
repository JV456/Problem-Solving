//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    string secFrequent(string arr[], int n) {
        int fMax = 0, sMax = 0;
        string fWord = "", sWord = "";

        for (int i = 0; i < n; i++) {
            int cnt = 0;

            // Count frequency of arr[i]
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    cnt++;
                }
            }

            // Track most and second-most frequent
            if (cnt > fMax) {
                sMax = fMax;
                sWord = fWord;

                fMax = cnt;
                fWord = arr[i];
            }
            else if (cnt > sMax && arr[i] != fWord) {
                sMax = cnt;
                sWord = arr[i];
            }
        }

        return sWord;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    
cout << "~" << "\n";
}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends