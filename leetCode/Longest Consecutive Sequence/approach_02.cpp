class Solution {
public:
    int longestConsecutive(vector<int> &nums)
    {
        if(nums.size() == 0) return 0;

        unordered_set<int> st;
        for(auto val: nums){
            st.insert(val);
        }

        int res = 0;

        for(auto val: nums){
            if(st.find(val-1) == st.end()){
                int num = val;
                int curMax = 1;

                while(st.find(num + 1) != st.end()){
                    num++;
                    curMax++;
                }
                res = max(res, curMax);
            }
        }

        return res;
    }
};