class Solution {
public:
    int longestConsecutive(vector<int> &nums)
    {
        if(nums.size() == 0) return 0;

        int n = nums.size();

        sort(nums.begin(), nums.end());

        int cnt = 1, res = 1;
        
        for(int i = 0; i < n-1; i++){
            if(nums[i+1] == nums[i] + 1) cnt += 1;
            else if(nums[i+1] == nums[i]) continue;
            else cnt = 1;
            res = max(res, cnt);
        }

        return res;
    }
};