class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for (int i = 0 , n = nums.size(); i < n; ++i) {
            int start = i;
            while (i + 1 < n && nums[i + 1] == nums[i] + 1) ++i;
            if (start == i) ans.push_back(to_string(nums[start]));
            else ans.push_back(to_string(nums[start]) + '-' + '>' + to_string(nums[i]));
        }
        return ans;
    }
};