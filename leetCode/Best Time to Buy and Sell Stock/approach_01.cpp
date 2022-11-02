class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int mn = prices[0];
        int mx = INT_MIN;
        int ans = 0;
        
        for(int i = 1; i < n; i++){
            mn = min(mn, prices[i]);
            mx = max(mn, prices[i]);
            ans = max(ans, mx - mn);
        }
        
        return ans;
    }
};