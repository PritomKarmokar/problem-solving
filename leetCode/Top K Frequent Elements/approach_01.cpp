class Solution {
public:

    static bool cmp(pair<int, int> a, pair<int, int> b){
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        map<int, int> bucket;

        for(int i = 0; i < n; i++){
            bucket[nums[i]]++;
        }

        vector<pair<int, int>> pi;
        for(auto it = bucket.begin(); it != bucket.end(); it++){
            pi.push_back(make_pair(it->first, it->second));
        }

        sort(pi.begin(), pi.end(), cmp);

        vector<int> ans;
        for(auto it = pi.begin(); it != pi.end(); it++){
            if(k == 0) break;
            ans.push_back(it->first);
            k--;
        }

        return ans;
    }
};