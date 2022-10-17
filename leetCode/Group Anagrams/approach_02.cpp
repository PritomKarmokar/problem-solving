class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map< map<char, int>, vector<string>> mp;    

        // here "map < char, int >" is used as a key in "mp" map since in the previouse implementation we're sorting the string 't' to map but the inputs are
        // only lowercase alphabets so mapping between then will reduce time complexity.
        
        for(string s: strs){
            string t = s;
            map<char, int> tmp;
            for(auto ch: t) tmp[ch]++;

            mp[tmp].push_back(s);
        }

        vector< vector<string>> ans;
        for(auto val: mp){
            ans.push_back(val.second);
        }

        return ans;
    }
};