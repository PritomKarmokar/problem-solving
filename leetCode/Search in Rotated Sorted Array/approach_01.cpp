class Solution {
public:
    
    int findPivotIndex(vector<int> &nums)
    {
        int n = nums.size() - 1;
        int s = 0;
        int e = n;
        
        while(s <= e){
            
            int m = s + (e - s)/2;
            
            if(m < e && nums[m] > nums[m+1]){
                return m;
            }
            else if(s < m && nums[m] < nums[m-1]){
                return m - 1;
            }
            else if(nums[s] < nums[m]){
                s = m + 1;
            }
            else if(nums[s] >= nums[m]){
                e = m - 1;
            }
        }
        
        // the array is not rotated so the value at the last position is the maximum element as well as the pivot element.
        return n;
    }
    
    
    int binarySearch(vector< int > &nums, int s, int e, int target)
    {        
        while(s <= e){
            
            int m = s + (e - s)/2;
            
            if(nums[m] == target){
                return m;
            }
            else if(nums[m] < target){
                s = m + 1;
            }
            else{
                e = m - 1;
            }
        }
        
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        
        int n = nums.size() - 1;
        
        int pivotIndex = findPivotIndex(nums);
        
        int firstTry = binarySearch(nums, 0, pivotIndex, target);
        
        if(firstTry != -1){
            return firstTry;
        }
        
        return binarySearch(nums, pivotIndex + 1, n, target);
        
    }
};