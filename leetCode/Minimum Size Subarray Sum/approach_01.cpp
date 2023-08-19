class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        int res = INT_MAX;
        int sum = 0;

        while(r < n){
            sum += nums[r];
            while(sum >= target){
                res = min(res, r-l+1);
                sum -= nums[l];
                l++;
            }
            r++;
        }

        if(res == INT_MAX) res = 0;
        
        return res;
    }
};