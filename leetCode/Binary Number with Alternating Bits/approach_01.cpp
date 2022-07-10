// https://leetcode.com/problems/binary-number-with-alternating-bits/
class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        int curVal = (n & 1); // determining the value of the last position
        n >>= 1;           // dividing the number by 2
        bool flag = true;
        
        while(n != 0){
            
            int nextVal = (n & 1); // determining the value of the next position
            
            if(nextVal == curVal){ 
                flag = false;
                break;
            }
            else{
                curVal = nextVal;
            }
            n >>= 1;
        }
        
        return flag;
    }
};