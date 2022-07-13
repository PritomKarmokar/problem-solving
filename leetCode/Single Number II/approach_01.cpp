class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int n = nums.size();
        map< int, int > mp;

        for(int i = 0; i < n ; i++){
            int cur = nums[i];
            mp[cur]++;
        }

        int ans = 0;
        for(auto val: mp){
            if(val.second == 1){
                ans = val.first;
                break;
            }
        }

        return ans;
    }
};