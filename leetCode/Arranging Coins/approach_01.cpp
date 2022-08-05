class Solution {
public:
    int arrangeCoins(int n) {
        int cnt = 0;
        long long int total = 0;
        
        for(int i = 1; i <= n ; i++){
            total += i;
            if(total > n) break;
            else{
                cnt += 1;
            }
        }
        return cnt;
    }
};