class Solution {
public:
    
    // Function for searching the leftmost and rightmost indices using binary search.
    int search(vector < int > &nums, int target, bool isFirst)
    {
        int n = nums.size() ;
        int l = 0;
        int r = n - 1;
        int index = -1;
        
        while(l <= r){
            
            int m = l + (r - l)/2;
            
            if(nums[m] == target){
                
                index = m;
                
                if(isFirst){    // 'true' means searching for the leftmost first ocurrence.
                    
                    r = m - 1;  // continue searching in the left after one ocurrence has been found.
                    
                }
                else{           // searching for the rightmost ocurrence.
                    
                    l = m + 1;  // continues searching in the right after one ocurrence has been found.
                }
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
        
        vector < int > index(2, -1);
        
        index[0] = search(nums, target, true); // searching for the leftmost index of the targeted value.
        
        index[1] = search(nums, target, false); // searching for the rightmost index of the targeted value.
        
        return index;
    }
};