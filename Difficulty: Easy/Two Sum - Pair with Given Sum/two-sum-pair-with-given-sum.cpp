//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    bool binarySearch(vector<int> &arr, int left, int right, int target){
        while (left <= right){
            int mid = left + (right - left) / 2;
    
            if (arr[mid] == target)
                return true;
            if (arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }

    bool twoSum(vector<int> &arr, int target){
        
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++){
            int complement = target - arr[i];

            if (binarySearch(arr, i + 1, arr.size() - 1, complement))
                return true;
        }

        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.twoSum(arr, x);
        cout << (ans ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends