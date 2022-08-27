class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if(s.size() != t.size()) return false;

        int n = s.size();

        int counts[26] = {0};

        for(int i = 0; i < n; i++){
            counts[s[i]-'a']++;
            counts[t[i]-'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(counts[i] > 0) return false;
        }

        return true;
    }
};