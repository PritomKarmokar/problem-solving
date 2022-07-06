class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        uint32_t ans = 0;
        
        for(int i = 31, j = 0; i >= 0 ; i--, j++){
            if(n&(1<<i)){ // first checking if the current is 1 or not
                ans = (ans | (1<<j)); // then setting that bit to 1 in reverse
            }
        }
        
        return ans;
    }
};