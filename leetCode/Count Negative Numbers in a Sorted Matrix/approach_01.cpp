// Solving the problem using simple linear searching. For better approach see 'approach_02.cpp'

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        
        for(int i = 0; i < n ; i++){
            int m = grid[i].size();
            
            for(int j = 0; j < m ; j++){
                if(grid[i][j] < 0) ans++;
            }
        }
        
        return ans;
    }
};