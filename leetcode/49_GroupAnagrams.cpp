class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        vector<string> temp = strs;
        for(int i = 0 ; i < temp.size(); i++)
        {
            sort(temp[i].begin() , temp[i].end() );
            mp[temp[i]].push_back(strs[i]);
        }
        for (const auto& it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;


    }
};