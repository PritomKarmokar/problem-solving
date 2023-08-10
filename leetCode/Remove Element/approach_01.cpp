class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();
        map <int, int> mp;

        for(auto num: nums){
            mp[num] += 1;
        }

        int k = 0;
        if(mp.count(val)){
            k = mp[val];

            vector<int> tmp;
            for(auto num: nums){
                if(num != val)
                    tmp.push_back(num);
            }

            for(int i = 0; i < k; i++){
                tmp.push_back(val);
            }
            
            nums = tmp;

            return n - k;
        }

        return n;
    }
};