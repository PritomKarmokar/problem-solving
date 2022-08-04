// Solving the problem using two pointer approach traversing from both end at the same time.
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0;
        int r = n-1;
        
        while(l < r){
            if(numbers[l] + numbers[r] == target){
                return {l+1, r+1};
            }
            
            if(numbers[l] + numbers[r] < target){
                l++;
            }
            else{
                r--;
            }
        }
        
        return {-1,-1};
    }
};