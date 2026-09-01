class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us = nums;
        int ans = 0 ;
        for (auto x : us)
        {
            if (us.find(x+1) != us.end())
            {
                int curr = x;
                int count = 1;
                while (us.find(x+2) != us.end())
                {
                    count++;
                    x++;
                }
                ans = max (ans , count);
            }
        }
        return ans;
    }
};