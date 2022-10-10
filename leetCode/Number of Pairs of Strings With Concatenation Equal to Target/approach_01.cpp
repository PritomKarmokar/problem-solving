// Time complexity : O(n*2)

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
    
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                ans += (nums[i] + nums[j] == target) + (nums[j] + nums[i] == target);

            }
        }

        return ans;

    }

};