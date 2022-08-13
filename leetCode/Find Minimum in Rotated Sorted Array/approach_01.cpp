/*  
    Same approach like this problem https://leetcode.com/problems/search-in-rotated-sorted-array/ 
    but here we're returning the index of the minimum value presented in the nums instead of the pivot element
*/
class Solution {
public:
    
    int findMin(vector<int>& nums) {
        
        int n = nums.size() - 1;
        int s = 0;
        int e = n;
        int index = 0;
        
        while(s <= e){
            
            int m = s + (e - s)/2;
            
            if(m < e && nums[m] > nums[m+1]){
                return nums[m+1];
            }
            else if(s < m && nums[m] < nums[m-1]){
                return nums[m];
            }
            else if(nums[s] < nums[m]){
                s = m + 1;
            }
            else if(nums[s] >= nums[m]){
                e = m - 1;
            }
        }
        
        return nums[index]; 
    }
};