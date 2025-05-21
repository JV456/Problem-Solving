class Solution {
public:

    int firstElementKTime(const std::vector<int>& arr, int k) {

        std::unordered_map<int, int> freq_map;

        for (int element : arr) {

            freq_map[element]++;

            if (freq_map[element] == k) {
                return element;
            }
        }

        return -1;
    }
};