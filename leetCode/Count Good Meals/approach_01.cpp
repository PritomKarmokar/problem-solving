class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        map<int, int> mp;
        int ans = 0;
        int mod = 1e9 + 7;

        for(auto val: deliciousness)
        {
            int power = 1;
            for(int i = 0; i <= 21; i++){
                if(mp.find(power - val) != mp.end())
                {
                    ans += mp[power - val];
                    ans %= mod;
                }
                power = power * 2;
            }
            mp[val] += 1;

        }

        return ans;  
    }
};