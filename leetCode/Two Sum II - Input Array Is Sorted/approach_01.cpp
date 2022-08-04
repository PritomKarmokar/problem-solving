// Solving the problem using the same approach as the original 'Two Sum' problem.
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans;
        map<int, int> mp;

        for(int i = 0 ; i < n ; i++){
            int curVal = numbers[i];
            int nextVal = target - curVal;

            if(mp.find(nextVal) != mp.end()){
                ans.push_back(i+1);
                ans.push_back(mp[nextVal]);
            } 

            mp[curVal] = i+1;
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};