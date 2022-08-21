// Solving the problem using top-down dp approach.
class Solution {
public:
    
    int dp[105] = {};
    
    int solve(vector< int > &nums, int n)
    {
        if(n == 0) return nums[0];
        if(n < 0) return 0;
        if(dp[n] != -1) return dp[n];
            
        // robbing the present house and then move to the (n-2)th house
        int way1 = nums[n] + solve(nums, n-2);
        
        // skipping the present house and rob the (n-1)th house
        int way2 = 0 + solve(nums, n-1);
        
        dp[n] = max(way1, way2);
        
        return dp[n];
    }
    
    int rob(vector<int>& nums) {
       
        for(int i = 0; i < 105; i++) dp[i] = -1;
        
        return solve(nums, nums.size() - 1);
    }
};