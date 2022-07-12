class Solution {
public:
    // First generate all the subsets of the numbers and then did xor operation. It's simply the brute force approach.
    int total = 0;
    void generateSubset(vector< int > &nums, int i, vector< int > &subset)
    {
        if(i == nums.size()){
            int ans = 0;
            for(auto val : subset){
                ans = (ans ^ val); 
            }
            total += ans;
            return;
        }
        // i-th element included in the subset.
        subset.push_back(nums[i]);
        generateSubset(nums, i+1, subset);
        subset.pop_back();

        // i-th element not included in the subset.
        generateSubset(nums, i+1, subset);
    }
    
    int subsetXORSum(vector<int>& nums) {
        vector< int > empty;

        generateSubset(nums, 0, empty);

        return total; 
    }
};