class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int ans = 0;
        
        for(int i = 31; i >= 0; i--){
            if( (x & (1<<i)) != (y & (1<<i)) ) ans++; // checking value of every bit position and if both are not equal incrementing ans.
        }
        
        return ans;
    }
};