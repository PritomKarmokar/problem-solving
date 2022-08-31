class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        vector<pair<int, int>> pi;
        
        for(int i = 0; i < n; i++){
            pi.push_back(make_pair(nums[i], i));
        }
        
        sort(pi.begin(), pi.end());
        
        for(int i = 0; i < n - 1; i++){
            if(pi[i].first == pi[i+1].first && (pi[i+1].second - pi[i].second) <= k)
                return true;
        }   
        
        return false;
    }
};