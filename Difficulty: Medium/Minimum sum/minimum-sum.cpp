// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        string num1 = "", num2 = "";
        for (int i = 0; i < arr.size(); ++i) {
            if (i % 2 == 0) num1 += arr[i] + '0';
            else num2 += arr[i] + '0';
        }
        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
        string res = "";
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';
            res += (sum % 10) + '0';
            carry = sum / 10;
        }
        reverse(res.begin(), res.end());
        int k = 0;
        while (k < res.size() && res[k] == '0') ++k;
        return k == res.size() ? "0" : res.substr(k);
    }
};