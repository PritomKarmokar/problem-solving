class Solution {
public:
    // A function that uses binary search algortihm and returns the leftmost index of the negative value presented in the grid.
    int search(vector< int > &nums)
    {
        int n = nums.size();
        int l = 0;
        int r = n - 1;

        while(l <= r){
            int m = l + (r - l)/2;
            if(m < r && nums[m] > 0 && nums[m+1] < 0){
                return m+1;
            }
            else if(nums[m] < 0){
                r = m - 1;
            }
            else if(nums[m] >= 0){
                l = m + 1;
            }
        }

        return l;
    }

    int countNegatives(vector<vector<int>>& grid) {
    
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(grid[i][m-1] >= 0) continue;     // last element is positive that means all elements are positive in this row and so no need to searh for negative indices.
            else if(grid[i][0] < 0) ans += m;   // first element is negative that means all elements are negative.
            else{                               
                int leftNegativeIndex = search(grid[i]);
                ans += (m - leftNegativeIndex);
            }
        }
        return ans;
    }
};