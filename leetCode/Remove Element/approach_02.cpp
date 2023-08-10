class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();
        int ans = 0;
        int r = 0;

        for(int l = 0; l < n ; l++){
            if(nums[l] != val){
                nums[r] = nums[l];
                r++;
                ans++;
            }
        }
        
        return ans;
    }
};