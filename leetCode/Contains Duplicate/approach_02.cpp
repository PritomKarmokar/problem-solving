// Using set to find duplicates
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n = nums.size();
        set<int> duplicate;

        for(auto val: nums){
            if(duplicate.count(val)){
                return true;
            }
            duplicate.insert(val);
        }

        return false;
    }   
};