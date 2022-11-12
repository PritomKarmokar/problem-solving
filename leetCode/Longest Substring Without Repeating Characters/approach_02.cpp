class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        vector<int> dict(256, -1);
        int ans = 0, start = -1;

        for(int i = 0; i < n; i++){
            char ch = s[i];
            if(dict[ch] > start) start = dict[ch];
            dict[ch] = i;
            ans = max(ans, i - start);
        }

        return ans;
    }
};