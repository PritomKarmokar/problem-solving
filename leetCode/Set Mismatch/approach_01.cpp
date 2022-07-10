// https://leetcode.com/problems/set-mismatch/
class Solution {
public:

    // Cycle sort    
    void cycleSort(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0;
        
        while(i < n){
            int current = nums[i] - 1;
            
            if(nums[current] != nums[i]){
                swap(nums[current], nums[i]);
            }
            else i++;
        }
    }
    
    
    vector<int> findErrorNums(vector<int>& nums) {
        
        cycleSort(nums);
        
        int n = nums.size();
        
        vector< int > res;
        
        for(int i = 0; i < n ; i++){
            if(nums[i] != i+1){
                res.push_back(nums[i]);
                res.push_back(i+1);
                break;
            }
        }
        
        return res;
    }
};