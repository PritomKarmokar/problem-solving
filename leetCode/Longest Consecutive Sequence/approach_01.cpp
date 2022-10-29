
class Solution {
public:
    
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        if(n >= 1) ans = 1;
        int seqLen = 1;

        sort(nums.begin(), nums.end());

        for(int i = 1; i < n; i++){
            if(nums[i] - nums[i-1] == 1) seqLen += 1;
            else if(nums[i] == nums[i-1]) continue;
            else seqLen = 1;

            ans = max(seqLen, ans);
        }

        return ans;
    }
};