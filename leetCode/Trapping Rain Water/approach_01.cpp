class Solution {
public:
    int trap(vector<int> &height)
    {
        int n = height.size();

        vector<int> left(n, 0), right(n, 0);

        int leftMax = height[0];
        for(int i = 1; i < n; i++){
            left[i] = leftMax;
            leftMax = max(height[i], leftMax);
        }

        int rightMax = height[n-1];
        for(int i = n-2; i >= 0; i--){
            right[i] = rightMax;
            rightMax = max(height[i], rightMax);
        }

        int trapWater = 0;
        for(int i = 1; i < n - 1; i++){
            if(height[i] < left[i] && height[i] < right[i]){
                trapWater += min(left[i], right[i]) - height[i];
            }
        }

        return trapWater;
    }
};