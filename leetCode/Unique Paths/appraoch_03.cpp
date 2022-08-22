/*
    If we start moving from last position to the first position that means not taking 'posX' and 'posY' these two extra variables
    the problem statement now becomes that we can move to "left" (m, n - 1) and "up" (m - 1, n) from the current position (m, n).

*/

class Solution {
public:
    
    int dp[105][105];
    
    int ways(int m, int n)
    {
        if(m == 0 && n == 0) return 1;
        
        if(m < 0 || n < 0) return 0;
        
        if(dp[m][n] != -1) return dp[m][n];
        
        int moveUp = ways(m - 1, n);
        
        int moveLeft = ways(m, n - 1);
        
        dp[m][n] = moveUp + moveLeft;
        
        return dp[m][n];
    }
    
    int uniquePaths(int m, int n) {
        
        // Initializing the dp array with values -1.
        for(int i = 0; i < 105; i++){
            for(int j = 0; j < 105; j++) dp[i][j] = -1;
        }
        
        return ways(m - 1, n - 1);
    }
};