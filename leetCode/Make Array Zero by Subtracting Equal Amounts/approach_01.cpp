class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        set < int > cnt;
        
        for(auto val: nums){
            if(val > 0) cnt.insert(val);
        }
        
        int ans = cnt.size();
        
        return ans;
    }
};