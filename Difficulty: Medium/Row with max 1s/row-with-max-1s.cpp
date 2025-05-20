//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int first(vector<int>& row, int low, int high) {
        while (high >= low) {
            int mid = low + (high - low) / 2;
            if ((mid == 0 || row[mid - 1] == 0) && row[mid] == 1)
                return mid;
            else if (row[mid] == 0)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }

    int rowWithMax1s(vector<vector<int>>& mat) {
        int max_row_index = -1, max = -1;
        int R = mat.size();
        int C = mat[0].size();

        for (int i = 0; i < R; i++) {
            int index = first(mat[i], 0, C - 1);
            if (index != -1 && C - index > max) {
                max = C - index;
                max_row_index = i;
            }
        }

        return max_row_index;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the integer input
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        cout << obj.rowWithMax1s(mat);
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends