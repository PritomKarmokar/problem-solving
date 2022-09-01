class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mp;
        vector<int> ans(2, -1);

        int n = nums.size();

        for(int i = 0; i < n; i++){
            int next = target - nums[i];
            if(mp.count(next)){
                ans[0] = i;
                ans[1] = mp[next];
                return ans;
            }
            mp[nums[i]] = i; 
        }

        return ans;
    }

};