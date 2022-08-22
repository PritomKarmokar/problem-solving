/*
    This is the general recursive approach for solving this problem. 
    Though this might give TLE because of the overlapping subproblems and we'll use dynamic programming to solve the problem in a fater runtime.
*/

class Solution {
public:
        
    int ways(int posX, int posY, int m, int n)
    {
        if(posX == m-1 && posY == n-1) return 1;
        
        if(posX >= m || posY >= n) return 0;
          
        int right = ways(posX + 1, posY, m, n); // moves to right corner.
        
        int bottom = ways(posX, posY + 1, m, n);// moves to bottom corner. 
        
        return right + bottom;
    }
    
    int uniquePaths(int m, int n) {
    
        int ans = ways(0, 0, m, n);
        
        return ans;
    }
};