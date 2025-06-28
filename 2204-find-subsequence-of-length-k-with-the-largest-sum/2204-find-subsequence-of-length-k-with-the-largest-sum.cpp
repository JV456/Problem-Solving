class Solution 
{
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<pair<int, int>> pairs;
        for (int i = 0; i < n; ++i)
        {
            pairs.push_back({nums[i], i});
        }

        sort(pairs.begin(), pairs.end(), [](auto& a, auto& b) {
            return a.first > b.first;
        });

        pairs.resize(k);
        sort(pairs.begin(), pairs.end(), [](auto& a, auto& b) {
            return a.second < b.second;
        });

        vector<int> result;
        for (auto& p : pairs)
        {
            result.push_back(p.first);
        }

        return result;
    }
};