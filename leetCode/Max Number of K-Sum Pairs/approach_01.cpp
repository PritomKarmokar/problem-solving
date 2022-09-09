class Solution {
public:
    int maxOperations(vector<int> &nums, int k)
    {
        int n = nums.size();
        int ans = 0;
        map<int, int> mp;

        for(int i = 0; i < n; i++){
            int cur = nums[i];
            int next = k - cur;
            if(mp[next] > 0){
                ans += 1;
                mp[next] -= 1;
            }
            else{
                mp[cur] += 1;
            }
        }

        return ans;
    }


};