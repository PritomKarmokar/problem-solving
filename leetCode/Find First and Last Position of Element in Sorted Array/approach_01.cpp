// Solving the problem using 'Binary search' instead of 'Linear search'.
class Solution {
public:
    
    // Function for finding the leftmost ocurrence of the targeted value.
    int findFirstOcurrence(vector< int > &nums, int target)
    {
        int n = nums.size();
        int l = 0;    
        int r = n - 1;
        int index = -1;
        
        while(l <= r){
            
            int m = l + (r - l)/2;
            
            if(nums[m] == target){
                index = m;
                r = m - 1;  // continue searching in the left portion after one occurrence has been found
            }
            else if(nums[m] < target){
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }
        
        return index;
    }
    
    // Function for finding the rightmost ocurrence of the targeted value.
    int findLastOcurrence(vector< int > &nums, int target)
    {
        int n = nums.size();
        int l = 0;    
        int r = n - 1;
        int index = -1;
        
        while(l <= r){
            
            int m = l + (r - l)/2;
            
            if(nums[m] == target){
                index = m;
                l = m + 1;  // continue searching in the right after one occurrence has been found
            }
            else if(nums[m] < target){
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }
        
        return index;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
     
        vector< int > index(2, -1); // creating a vector of size 2 with -1 as their initial value.
        
        index[0] = findFirstOcurrence(nums, target);
        
        index[1] = findLastOcurrence(nums, target);
        
        return index;
    }
};