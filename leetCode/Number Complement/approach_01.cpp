class Solution {
public:
    int findComplement(int num) {
        
        int ans = 0;
        int i = 0;
        
        while(num != 0){
            if(num & 1) ans |= (0<<i); // if the bit position is 1 putting 0 at that position
            else ans |= (1<<i); // else the bit position is 0 so putting 1 at that position
            num >>= 1; // dividing the number by 2
            i++;   // incrementing the value of i for moving to next position
        }
        
        return ans;
    }
};