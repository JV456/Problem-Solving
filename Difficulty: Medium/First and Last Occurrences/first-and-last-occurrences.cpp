class Solution {
public:
    vector<int> find(vector<int>& arr, int x) {
        int first = firstOccurrence(arr, x);
        int last = lastOccurrence(arr, x);
        return {first, last};
    }

private:
    int firstOccurrence(const vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1, result = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                result = mid;
                high = mid - 1;
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return result;
    }

    int lastOccurrence(const vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1, result = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                result = mid;
                low = mid + 1;
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return result;
    }
};