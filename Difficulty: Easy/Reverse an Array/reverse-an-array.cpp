class Solution {
public:
    void reverseArray(std::vector<int>& arr) {

        int n = arr.size();

        if (n <= 1) {
            return;
        }

        int start = 0;
        int end = n - 1;

        while (start < end) {

            std::swap(arr[start], arr[end]);

            start++;
            end--;
        }
    }
};

void printVector(const std::vector<int>& arr) {
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}