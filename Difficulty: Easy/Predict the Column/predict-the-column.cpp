// User function Template for C++

class Solution {
  public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>> arr, int N) {

        int maxZeros = 0; 
        int colIndex = -1; 

        for (int j = 0; j < N; j++) { 
            int currentColumnZeroCount = 0;
            for (int i = 0; i < N; i++) { 
                if (arr[i][j] == 0) {
                    currentColumnZeroCount++;
                }
            }
            if (currentColumnZeroCount > maxZeros) {
                maxZeros = currentColumnZeroCount;
                colIndex = j;
            }
        }
        return colIndex;
    }
};