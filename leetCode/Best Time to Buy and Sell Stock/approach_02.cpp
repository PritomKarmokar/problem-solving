class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int n = prices.size();
        int left = 0;
        int right = 1;

        int max_profit = 0;

        while(right < n){
            int curProfit = prices[right] - prices[left];

            if(prices[left] < prices[right]){
                max_profit = max(curProfit, max_profit);
            }
            else{
                left = right;
            }
            right += 1;
        }    

        return max_profit;
    }
};