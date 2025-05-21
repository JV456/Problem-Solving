class Solution {
public:
    void rearrange(std::vector<int>& arr) {
        int n = arr.size();
        std::vector<int> positives;
        std::vector<int> negatives;

        for (int x : arr) {
            if (x >= 0) {
                positives.push_back(x);
            } else {
                negatives.push_back(x);
            }
        }

        int pos_idx = 0, neg_idx = 0, arr_idx = 0;
        while (pos_idx < positives.size() && neg_idx < negatives.size()) {
            if (arr_idx % 2 == 0) { 
                arr[arr_idx++] = positives[pos_idx++];
            } else { 
                arr[arr_idx++] = negatives[neg_idx++];
            }
        }

        while (pos_idx < positives.size()) {
            arr[arr_idx++] = positives[pos_idx++];
        }

        while (neg_idx < negatives.size()) {
           arr[arr_idx++] = negatives[neg_idx++];
        }
    }
};