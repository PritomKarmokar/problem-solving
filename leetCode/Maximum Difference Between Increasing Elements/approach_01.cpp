class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 1;
        int ans = -1;

        while(r < n){
            if(nums[l] < nums[r]){
                int diff = nums[r] - nums[l];
                ans = max(ans, diff);
            }
            else{
                l = r;
            }
            r++;
        }

        return ans;
    }
};