// Implement via the concept of bucket sort
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int, int> mp;

        for(auto val: nums){
            mp[val]++;
        }

        vector<vector<int>> buckets(n+1);
        for(auto val: mp){
            buckets[val.second].push_back(val.first);
        }

        vector<int> res;
        for(int i = n; i >= 0; i--){
            if(res.size() >= k){
                break;
            }

            if(!buckets[i].empty()){
                res.insert(res.end(), buckets[i].begin(), buckets[i].end());
            }
        }
        return res;
    }
};