class Solution {
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        int n = nums.size();
        int l = 0, r = 0;
        unordered_set<int> st;
        int ans = 0;
        int sum = 0;

        while(r < n){
            if(st.find(nums[r]) == st.end()){
                st.insert(nums[r]);
                sum += nums[r];
                ans = max(ans, sum);
                r++;
            }
            else{
                st.erase(nums[l]);
                sum -= nums[l];
                l++;
            }
        }
        return ans;
    }
};