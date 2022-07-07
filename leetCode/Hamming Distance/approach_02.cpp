class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int ans = __builtin_popcount(x^y); // Doing xor and then just counting the number of ones
        
        // reason of doing xor operation is if x and y having different values at bit position then xor will give 1 at that position and finally we need to just count the number of ones presented in the xor result.
        
        return ans;
    }
};