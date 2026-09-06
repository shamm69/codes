class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> pp ( n+1 , 1 );
        vector<int> sp ( n+1 , 1 );
        for (int i = 1 ; i <= n ; i++)
        {
            pp[i] = pp[i-1] * nums[i-1];
        }
        for (int i = n-1 ; i>= 0 ; i--)
        {
            sp[i] = sp[i+1] * nums[i];
        }
        for (int i = 0 ; i < n ; i++)
        {
            ans.push_back(pp[i] * sp[i+1]);
        }
        return ans;
    }
};

/*
 [1,2,3,4]
  1 2 6 24
 24 24 12 4


*/