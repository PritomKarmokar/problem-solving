// Used priority queue to solve the problem, so external sorting is of no use here.

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++) mp[nums[i]]++;

        priority_queue<pair<int, int>> pq;
        vector<int> ans;

        for(auto val : mp){
            pq.push(make_pair(val.second, val.first));
            if(pq.size() > (int) mp.size() - k){
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }

        return ans;
    }

};