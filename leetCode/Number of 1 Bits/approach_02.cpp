class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int ans = __builtin_popcount(n); // function that returns number of ones in the bit representation
        
        return ans;
    }
};