// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int> result(1, 1);
        for (int i = 2; i <= n; i++) {
            int carry = 0;
            for (int j = 0; j < (int)result.size(); j++) {
                int prod = result[j] * i + carry;
                result[j] = prod % 10;
                carry = prod / 10;
            }
            while (carry) {
                result.push_back(carry % 10);
                carry /= 10;
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};