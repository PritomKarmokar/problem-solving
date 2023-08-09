// I think this approach's time complexity is less than the others
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map <int, int> count;

        for(auto val: nums){
            if(count.find(val) != count.end()){
                return true;
            }
            else{
                count[val] += 1;
            }
        }
        return false;
    }
};