class Solution {
public:
    int arrangeCoins(int n) {

        // taking 'long long int' to avoid overflow problem since 'mid * (mid + 1)/2' can exceed the integer range.
        long long int start = 1;
        long long int end = n;
        
        while(start <= end){
            long long int mid = start + (end - start)/2;
            long long int cur = (mid * (mid + 1))/2;
            if(cur == n) return mid;
            else if(cur > n){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        
        // At this point start becomes greater than end
        
        return end;
    }
};