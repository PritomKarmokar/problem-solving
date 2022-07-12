class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int ans = words.size();
        bool flag[26] = {};
        
        for(auto ch : allowed) flag[ch-'a'] = true;
        
        for(auto strings : words){
            for(auto ch : strings){
                if(!flag[ch-'a']){
                    ans -= 1;
                    break;
                }
            }
        }
        
        return ans;
    }
};