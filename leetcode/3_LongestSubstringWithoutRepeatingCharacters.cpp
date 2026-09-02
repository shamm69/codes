class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0 , ans = 0 ;
        unordered_set<char> us;
        for (int j = 0 ; j < s.size() ; j++)
        {
                while (us.find(s[j]) != us.end())
                {
                    us.erase(s[i]);
                    i++;

                }
                us.insert(s[j]);
                ans = max(ans , j - i + 1);
            }
            return ans;
        }
};