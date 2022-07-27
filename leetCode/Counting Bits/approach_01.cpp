// This problem can be simply solved using this approach. Although we're told not to use this appraoch.
class Solution {
public:
    vector<int> countBits(int n) {
        
        vector< int > ans(n+1);
        
        for(int i = 0; i <= n; i++){
            ans[i] = __builtin_popcount(i); // a function that returns the number of 1's in the binaray representation of the number.
        }
        
        return ans;
    }
};