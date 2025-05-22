class Solution 
{
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) 
    {
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int>> usedQuery;
        priority_queue<int> availableQuery;
        sort(queries.begin(), queries.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        int queryPos = 0;
        int appliedCount = 0;

        for (int i = 0; i < n; ++i) 
        {
            while (queryPos < queries.size() && queries[queryPos][0] == i) 
            {
                availableQuery.push(queries[queryPos][1]);
                ++queryPos;
            }

            nums[i] -= usedQuery.size();

            while (nums[i] > 0 && !availableQuery.empty() && availableQuery.top() >= i) 
            {
                usedQuery.push(availableQuery.top()); availableQuery.pop();
                nums[i]--;
                appliedCount++;
            }

            if (nums[i] > 0) 
            {
                return -1;
            }

            while (!usedQuery.empty() && usedQuery.top() == i) 
            {
                usedQuery.pop();
            }
        }

        return queries.size() - appliedCount;
    }
};