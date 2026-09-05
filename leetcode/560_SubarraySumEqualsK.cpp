class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ps(n+1 , 0);
        for (int i = 0 ;  i < n ; i++)
        {
            ps[i+1] = ps[i] + nums[i];
        }
        unordered_map<int , int> freq;
        int ans = 0 ;
        for (int i = 0 ; i <= n ; i++)
        {
            int need = ps[i] - k;
            if ( freq.count(need)){
                ans += freq[need];
            }
            freq[ps[i]]++;
        }
        return ans;
    }
};