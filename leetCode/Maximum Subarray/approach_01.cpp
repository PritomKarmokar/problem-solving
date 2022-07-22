//https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();
        int best = nums[0];
        int sum = nums[0];
        
        for(int i = 1; i < n ; i++){
            sum = max(nums[i], sum + nums[i]);  // is the 'nums[i] + sum' better or only 'nums[i]' giving better result
            best = max(best, sum);              // taking maximum of the current and previous best
        }
        
        return best;
    }
};