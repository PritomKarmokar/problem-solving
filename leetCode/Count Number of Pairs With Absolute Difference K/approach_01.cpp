class Solution {
public:
    int countKDifference(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int ans = 0;
        map<int, int> mp;

        for(int i = 0; i < n; i++){
            int cur = nums[i];
            int temp = abs(cur - k);

            if(mp.count(temp)){
                ans += max(mp[cur], mp[temp]);
            }
            mp[cur]++;
        }

        return ans;
    }

};