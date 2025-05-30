class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        int max_val = 0;
        for (int x : arr) {
            if (x > max_val) {
                max_val = x;
            }
        }

        std::vector<int> counts(max_val + 1, 0);
        for (int x : arr) {
            counts[x]++;
        }

        for (int a = 1; a <= max_val; ++a) {
            if (counts[a] == 0) {
                continue;
            }

            for (int b = a; b <= max_val; ++b) { 
                if (counts[b] == 0) {
                    continue;
                }

                if (a == b && counts[a] < 2) {
                    continue;
                }

                long long sum_sq = (long long)a * a + (long long)b * b; 
                double c_double = std::sqrt(sum_sq);
                int c_int = static_cast<int>(c_double);

                if (c_int * c_int != sum_sq || c_int > max_val) {
                    continue;
                }

                if (counts[c_int] > 0) {
                    return true;
                }
            }
        }

        return false;
    }
};