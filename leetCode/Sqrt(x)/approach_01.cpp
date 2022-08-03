class Solution {
public:
    int mySqrt(int x) {
        
        int low = 0;
        int high = x;
        
        int ans = 0;
        
        while(low <= high){
            
            long long int mid = low + (high - low)/2;   // Long Long Int is necessary cause (mid * mid) result can be an overflow value.
            
            if(mid * mid <= x){     
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return ans;
    }
};